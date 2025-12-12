
#include <cml.h>
#include <partial.c>

static void _p_misc_gifcollection_header()
{
	cml_noend("link rel='stylesheet' href='/static/gif-collection.css'");
}

void p_misc_gifcollection(void)
{
	page("GIF Collection", .header = _p_misc_gifcollection_header);

	cml("h1", "GIF Collection");
	cml_noend("hr");
	cml("p",
"I use a *lot* of GIFs when talking on Discord, and Discord's GIF picker \
does not cache GIFs, making it atrociously slow to find a GIF in my favourites \
list of... >100 GIFs. To solve that, I've created a GIF collection here on my \
website which should be cached depending on your browser along with letting \
me \"tag\" my GIFs for ease-of-searching.");
	cml("p", "No, I do not know the source of most of these. I just search for them on Discord and favourite them as I find them.");

	cml_noend("br");
	cml_noend("hr");
	cml_noend("br");

	cml_new("div");
	cml("input type='text' placeholder='Search' id='search'", "");
	cml("button id='search-submit'", "Search");
	cml_end();
	cml("p", "See search syntax <a href='https://www.fusejs.io/examples.html#extended-search'>here</a> (external link to Fuse.js documentation).");

	cml_new("details open");
	cml("summary", "Search Results");
	cml_noend("hr");
	cml("div id='results'", "");
	cml_end();

	cml_noend("br");
	cml_noend("hr");
	cml_noend("br");

	cml_new("details");
	cml("summary", "Full Collection");
	cml_noend("hr");
	cml("div id='collection'", "");
	cml_end();

	#if 1 /* prod */
	cml("script defer type='text/javascript' src='https://unpkg.com/papaparse@5.5.3/papaparse.min.js'", "");
	cml("script defer type='text/javascript' src='https://unpkg.com/fuse.js@7.1.0/dist/fuse.min.js'", "");
	#else /* dev */
	cml("script defer type='text/javascript' src='https://unpkg.com/papaparse@5.5.3/papaparse.js'", "");
	cml("script defer type='text/javascript' src='https://unpkg.com/fuse.js@7.1.0/dist/fuse.js'", "");
	#endif
	cml("script defer type='text/javascript' src='/static/gif-collection.js' onload='main();'", "");

	endpage();
}
