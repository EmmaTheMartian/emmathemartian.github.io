
#ifndef __projects_c__
#define __projects_c__

#include <stdlib.h>

struct project_t
{
	const char *name, *kind, *status, *link, *desc;
};

#define TANGLED(repo) ("https://tangled.org/emmeline.girlkisser.top/" repo "/")
#define GITHUB(repo) ("https://github.com/" repo "/")
#define CODEBERG(repo) ("https://codeberg.org/" repo "/")

#define MC_MOD ("Minecraft Mod")
#define MC_API ("Minecraft Library")
#define MC_MODPACK ("Minecraft Modpack")
#define API ("Library/API")
#define APP ("Application")
#define TOOL ("Tool")
#define COMPILER ("Compiler")

struct project_t _current_projects[] = {
	{ "keraforge",     APP,        "Active",         TANGLED("keraforge"),                "A top-down 2D RPG game engine.", },
	{ "beep",          APP,        "Active",         TANGLED("beep"),                     "A self-hosted mini-blogger.", },

	{ NULL }
};

struct project_t _older_projects[] = {
	/* Github projects */
	{ "Sea",           COMPILER,   "WIP",         GITHUB("sea-lang/sea"),                 "A general-purpose language designed for low-level-capable, performant, and portable code.", },
	{ "MineFactorial", MC_MOD,     "WIP",         GITHUB("emmathemartian/minefactorial"), "MineFactory revived and reimagined for modern versions", },
	{ "Cygnus",        MC_MOD,     "WIP",         GITHUB("nebula-modding/cygnus"),        "A space mod aiming to make exploring space fun and unique", },
	{ "Lazuli",        MC_API,     "WIP",         GITHUB("emmathemartian/lazuli"),        "A personal modding library made to make modding Minecraft a little less tedious", },
	{ "ReTekkit",      MC_MODPACK, "WIP",         GITHUB("retekkit/retekkit"),            "Tekkit revived and reimagined for modern versions", },
	{ "beep",          APP,        "WIP",         GITHUB("emmathemartian/beep"),          "a self-hosted mini-blogger.", },
	{ "Clockwork",     TOOL,       "Finished",    GITHUB("emmathemartian/clockwork"),     "A language-agnostic build tool", },
	{ "Maple",         API,        "Finished",    GITHUB("emmathemartian/maple"),         "Because JSON was overkill.", },
	{ "Raylib for V",  API,        "Active",      GITHUB("vlang/raylib-for-v"),           "Official, auto-generated, up-to-date Raylib bindings for V", },
	{ "Arcane",        MC_MOD,     "Rewriting",   GITHUB("emmathemartian/arcane"),        "A Minecraft mod which allows you to harness natural Aura around the world", },

	/* Codeberg projects */
	{ "Dapper",        MC_API,     "Active",      CODEBERG("emmathemartian/dapper"),      "A data-generation library for NeoForge", },
	{ "Regolith",      MC_API,     "Active",      CODEBERG("emmathemartian/regolith"),    "Cross platform bulk registration library for Minecraft", },
	{ "mrrp",          APP,        "Finished",    CODEBERG("emmathemartian/mrrp"),        "Modrinth Random Project Finder", },

	{ NULL }
};

#undef GITHUB
#undef CODEBERG

#undef MC_MOD
#undef MC_API
#undef MC_MODPACK
#undef API
#undef APP
#undef TOOL
#undef LANGUAGE

#endif
