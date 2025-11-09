
#include <cml.h>
#include <partial.c>

static void p_404()
{
	page("Index");

	cml("h1", "Uh-oh ;~;");
	cml("p", "This page doesn't exist...");
	cml("a href='/'", "Go to /");

	endpage();
}
