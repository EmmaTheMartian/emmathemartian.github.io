import re, requests, csv

def get_direct_link_of(view_url: str) -> str:
	# hacky? absolutely, but it works so idrc.
	html = requests.get(view_url).text
	gif_id = re.findall(r'https://media1.tenor.com/m/\S+.gif', html)[0].replace('https://media1.tenor.com/m/', '').replace('.gif', '')
	return 'https://c.tenor.com/' + gif_id + '.gif'

with open('gif-collection.csv', 'r') as ifp, open('gif-collection-new.csv', 'w') as ofp:
	ofp.write('name,tags,view_url,direct_url\n')
	csv_reader = csv.reader(ifp)
	for row in csv_reader:
		if csv_reader.line_num == 0:
			continue # skip headers

		r = [row[0], row[1], row[2], row[2]]
		if len(row) == 4:
			r[3] = row[3]
		elif 'https://tenor.com/view/' in r[2]:
			r[3] = get_direct_link_of(r[2])
			print(r)

		ofp.write(f'{r[0]},{r[1]},{r[2]},{r[3]}\n')
		ofp.flush()
