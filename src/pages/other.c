
#include <cml.h>
#include <partial.c>
#include <secret.c>

static void p_other(void)
{
	page("Other");

	secret("other");

	cml("p", "welcome to the other page");
	cml("p", "no, there is not anything to do here");
	cml_noend("hr");
	cml("p", "Other: \"Did you know that Turquoise is considered the best colour\"");
	cml("p", "Me: \"I have never heard of this\"");
	cml("p", "Other: \"It's <em>cyantifically</em> proven\"");

	endpage();
}
