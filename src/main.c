
#define CML
#include "cml.h"

#include <stdio.h>
#include <sys/stat.h>
#include <libgen.h>
#include <unistd.h>

#include "pages/404.c"
#include "pages/about.c"
#include "pages/contact.c"
#include "pages/index.c"
#include "pages/other.c"
#include "pages/palette.c"
#include "pages/projects.c"

#include "pages/misc/index.c"
#include "pages/misc/tv_and_movies.c"

#include "pages/thoughts/cplusplus.c"
#include "pages/thoughts/forge_vs_fabric.c"
#include "pages/thoughts/index.c"
#include "pages/thoughts/modern_minecraft.c"

void build(char *filepath, void (*p)())
{
	char *d = dirname(strdup(filepath));
	mkdir(d, 0777);
	free(d);

	FILE *fp = fopen(filepath, "w");
	if (fp == NULL)
	{
		fprintf(stderr, "failed to open %s\n", filepath);
		return;
	}

	cml_setout(fp);
	p();

	fclose(fp);
	cml_setout(stdout);
}

int main()
{
	build("output/index.html", p_index);
	build("output/404.html", p_404);
	build("output/about/index.html", p_about);
	build("output/contact/index.html", p_contact);
	build("output/other/index.html", p_other);
	build("output/palette/index.html", p_palette);
	build("output/projects/index.html", p_projects);

	build("output/misc/index.html", p_misc_index);
	build("output/misc/tv-and-movies/index.html", p_misc_tvandmovies);

	build("output/thoughts/index.html", p_thoughts_index);
	build("output/thoughts/cplusplus/index.html", p_thoughts_cplusplus);
	build("output/thoughts/forge-vs-fabric/index.html", p_thoughts_forgevsfabric);
	build("output/thoughts/modern-minecraft/index.html", p_thoughts_modernminecraft);
}
