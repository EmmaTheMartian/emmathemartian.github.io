with open("src/static/others/readme", "r") as f:
	for line in f.readlines():
		print('"' + line.replace('"', '\"').replace('\\', "\\\\").removesuffix('\n') + '\\n"')
