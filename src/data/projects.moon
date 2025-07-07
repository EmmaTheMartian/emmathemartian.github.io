class Project
	new: (name, kind, desc, repo, status) =>
		@name = name
		@kind = kind
		@desc = desc
		@repo = repo
		@status = status

-- Shorthands
GITHUB = 'https://github.com/emmathemartian/'
SEA_GITHUB = 'https://github.com/sea-lang/'
NEBULA_GITHUB = 'https://github.com/nebula-modding/'
CODEBERG = 'https://codeberg.org/emmathemartian/'

ACTIVE = 'Active'
FINISHED = 'Finished'
ACTIVE_WIP = 'Active WIP'
ON_HOLD = 'On Hold'

MC_MOD = 'Minecraft Mod'
MC_API = 'Minecraft Library'
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
		SEA_GITHUB .. 'sea',
		ACTIVE_WIP
	)
	Project(
		'Seal',
		LANGUAGE,
		'A meta-programmable markup language designed for making stylish and simple static sites.',
		GITHUB .. 'seal',
		ACTIVE
	)
	Project(
		'MineFactorial',
		MC_MOD,
		'MineFactory revived and reimagined for modern versions',
		GITHUB .. 'minefactorial',
		ACTIVE_WIP
	),
	Project(
		'Cygnus',
		MC_MOD,
		'A space mod aiming to make exploring space fun and unique',
		NEBULA_GITHUB .. 'cygnus',
		ACTIVE_WIP
	),
	Project(
		'Lazuli',
		MC_API,
		'A personal modding library made to make modding Minecraft a little less tedious',
		GITHUB .. 'lazuli',
		ACTIVE_WIP
	),
	Project(
		'ReTekkit',
		MC_MODPACK,
		'Tekkit revived and reimagined for modern versions',
		'https://github.com/retekkit/retekkit',
		ACTIVE_WIP
	),
	Project(
		'beep',
		APP,
		'a self-hosted mini-blogger.',
		GITHUB .. 'beep',
		ACTIVE_WIP
	),
	Project(
		'Clockwork',
		TOOL,
		'A language-agnostic build tool',
		GITHUB .. 'clockwork',
		FINISHED
	),
	Project(
		'Maple',
		API,
		'Because JSON was overkill',
		GITHUB .. 'maple',
		FINISHED
	),
	Project(
		'Raylib for V',
		API,
		'Official, auto-generated, up-to-date Raylib bindings for V',
		'https://github.com/vlang/raylib-for-v',
		ACTIVE
	),
	Project(
		'Arcane',
		MC_MOD,
		'A Minecraft mod which allows you to harness natural Aura around the world',
		GITHUB .. 'arcane',
		ON_HOLD .. ' (rewrite in progress)'
	)
	-- Codeberg projects
	Project(
		'Dapper',
		API .. ' ' .. MC_MOD,
		'A data-generation library for NeoForge',
		CODEBERG .. 'dapper',
		ACTIVE
	),
	Project(
		'Regolith',
		API .. ' ' .. MC_MOD,
		'Cross platform bulk registration library for Minecraft',
		CODEBERG .. 'regolith',
		ACTIVE
	),
	Project(
		'mrrp',
		APP,
		'Modrinth Random Project Finder',
		CODEBERG .. 'mrrp',
		FINISHED
	),
}

return PROJECTS
