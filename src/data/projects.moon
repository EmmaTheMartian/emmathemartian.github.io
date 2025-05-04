class Project
	new: (name, kind, desc, repo, status) =>
		@name = name
		@kind = kind
		@desc = desc
		@repo = repo
		@status = status

-- Shorthands
GITHUB = 'https://github.com/emmathemartian/'
CODEBERG = 'https://codeberg.org/emmathemartian/'

A = 'Active'
F = 'Finished'
AWIP = 'Active WIP'
HOLD = 'On Hold'

MC_MOD = 'Minecraft Mod'
MC_MODPACK = 'Minecraft Modpack'
API = 'Library/API'
APP = 'Application'
TOOL = 'Tool'
LANGUAGE = 'Language'

export PROJECTS = {
	-- Github projects
	Project(
		'Sea',
		LANGUAGE,
		'A general-purpose language designed for low-level-capable, performant, and portable code.',
		GITHUB .. 'sea',
		AWIP
	)
	Project(
		'Seal',
		LANGUAGE,
		'A meta-programmable markup language designed for making stylish and simple static sites.',
		GITHUB .. 'seal',
		AWIP
	)
	Project(
		'MineFactorial',
		MC_MOD,
		'MineFactory revived and reimagined for modern versions',
		GITHUB .. 'minefactorial',
		AWIP
	),
	Project(
		'ReTekkit',
		MC_MODPACK,
		'Tekkit revived and reimagined for modern versions',
		'https://github.com/retekkit/retekkit',
		AWIP
	),
	Project(
		'beep',
		APP,
		'a self-hosted mini-blogger.',
		GITHUB .. 'beep',
		AWIP
	),
	Project(
		'Clockwork',
		TOOL,
		'A language-agnostic build tool',
		GITHUB .. 'clockwork',
		A
	),
	Project(
		'Maple',
		API,
		'Because JSON was overkill',
		GITHUB .. 'maple',
		A
	),
	Project(
		'Raylib for V',
		API,
		'Official, auto-generated, up-to-date Raylib bindings for V',
		'https://github.com/vlang/raylib-for-v',
		A
	),
	Project(
		'Arcane',
		MC_MOD,
		'A Minecraft mod which allows you to harness natural Aura around the world',
		GITHUB .. 'arcane',
		HOLD .. ' (rewrite in progress)'
	)
	-- Codeberg projects
	Project(
		'Dapper',
		API .. ' ' .. MC_MOD,
		'A data-generation library for NeoForge',
		CODEBERG .. 'dapper',
		A
	),
	Project(
		'Regolith',
		API .. ' ' .. MC_MOD,
		'Cross platform bulk registration library for Minecraft',
		CODEBERG .. 'regolith',
		A
	),
	Project(
		'mrrp',
		APP,
		'Modrinth Random Project Finder',
		CODEBERG .. 'mrrp',
		F
	),
}

return PROJECTS
