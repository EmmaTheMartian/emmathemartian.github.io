module src

import emmathemartian.vsg.html

struct Project {
	name string
	desc string
	repo string
	status string
}

const my_projects = [
	// Github Projects
	Project{
		'MineFactorial',
		'MineFactory revived and reimagined for modern versions',
		'https://github.com/emmathemartian/minefactorial',
		'Active WIP'
	}
	Project{
		'ReTekkit',
		'ReTekkit revived and reimagined for modern versions',
		'https://github.com/retekkit/retekkit',
		'Active WIP'
	}
	Project{
		'beep',
		'a self-hosted mini-blogger.',
		'https://github.com/emmathemartian/beep',
		'Active WIP'
	}
	Project{
		'Clockwork',
		'A language-agnostic build tool',
		'https://github.com/emmathemartian/clockwork',
		'Active'
	}
	Project{
		'Maple',
		'Because JSON was overkill',
		'https://github.com/emmathemartian/maple',
		'Active'
	}
	Project{
		'Raylib for V',
		'Official, auto-generated, up-to-date Raylib bindings for V',
		'https://github.com/vlang/raylib-for-v',
		'Active'
	}
	Project{
		'Arcane',
		'A Minecraft mod which allows you to harness natural Aura around the world',
		'https://github.com/emmathemartian/arcane',
		'On Hold (Pending Rewrite)'
	}
	// Codeberg Projects
	Project{
		'Dapper',
		'A data-generation library for NeoForge',
		'https://codeberg.org/emmathemartian/dapper',
		'Active'
	}
	Project{
		'Regolith',
		'Cross platform bulk registration library for Minecraft',
		'https://codeberg.org/emmathemartian/regolith',
		'Active'
	}
	Project{
		'mrrp',
		'Modrinth Random Project Finder',
		'https://codeberg.org/emmathemartian/mrrp',
		'Finished'
	}
]

pub fn projects() html.HtmlElementOrString {
	mut projects_table_data := []html.HtmlElementOrString{}
	projects_table_data << html.tr([ html.th('Name'), html.th('Description'), html.th('Status') ])
	for project in my_projects {
		projects_table_data << html.tr([
			html.td(html.a(project.name, project.repo))
			html.td(project.desc)
			html.td(project.status)
		])
	}

	return page([
		html.h1('Projects')
		html.p('I keep some projects on Codeberg and some on GitHub.
		Why? I honestly do not know. I started doing this at some point and just have not fully migrated to Codeberg yet.')
		html.hr()
		html.h2('The Great Table of Projects')
		html.table(projects_table_data)
	])
}
