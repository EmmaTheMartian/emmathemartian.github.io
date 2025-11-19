let collection = [];

const add_row = (parent, e, index = -1) =>
{
	const div = document.createElement('div');
	div.className = 'gif';
	const name = document.createElement('p');
	name.id = 'gif-name';
	name.innerHTML = `${index > -1 ? (index + ': ') : ''}<a href="${e.view_url}">${e.name}</a>`;
	div.appendChild(name);
	const tags = document.createElement('p');
	tags.id = 'gif-tags';
	tags.innerText = 'Tags: ' + e.tags.replaceAll(';', ', ');
	div.appendChild(tags);
	const img = document.createElement('img');
	img.src = e.direct_url;
	img.alt = e.name;
	img.width = '180';
	img.setAttribute('async', '');
	div.appendChild(img);
	parent.appendChild(div);
}

const create_searcher = () =>
{
	const r = document.getElementById('results');
	r.innerHTML = '';

	const f = new Fuse(collection, {
		ignoreDiacritics: true,
		keys: ['name', 'tags'],
		threshold: 0.4,
		useExtendedSearch: true,
	});

	document.getElementById('search-submit').onclick = () =>
	{
		const s = document.getElementById('search');
		r.innerHTML = '';
		if (s.value.trim() == '')
		{
			return;
		}
		f.search(s.value).forEach((it, i) => add_row(r, it.item, i+1));
	};
}

const populate = () =>
{
	const c = document.getElementById('collection');
	Papa.parse(`${window.location.protocol}//${window.location.host}/static/gif-collection.csv`, {
		worker: true,
		download: true,
		header: true,
		skipEmptyLines: true,
		step: row =>
		{
			add_row(c, row.data);
			collection.push(row.data);
		},
		complete: () =>
		{
			console.log(`Loaded ${collection.length} GIFs.`);
			create_searcher();
		},
	});
}

const main = () => populate();
