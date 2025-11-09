
#include <cml.h>
#include <partial.c>

void p_misc_index(void)
{
	page("Misc");

	cml("h1", "Misc Pages");

	cml_new("ul");
	cml("li", "<a href='/misc/tv-and-movies'>My TV and Movie Rankings</a>");
	cml_end();

	endpage();
}
