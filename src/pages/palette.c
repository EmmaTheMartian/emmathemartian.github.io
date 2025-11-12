
#include <cml.h>
#include <partial.c>
#include <secret.c>

#define tablerow(name, hex) \
	{ \
		cml_new("tr"); \
		cml("td", "%s", name); \
		cml("td", "%s", hex); \
		cml_new("td"); \
		cml_newf("div class='swash' style='background-color: %s'", hex); \
		cml_end(); \
		cml_end(); \
		cml_end(); \
	}

static void p_palette(void)
{
	page("Palette");

	secret("palette");

	cml("h1", "Palette");

	cml("p", "This secret is boring, but whatever. It's the colour palette for my website my sona. I mostly have it here for personal reference :P.");

	cml_new("table");
	cml_new("tr");
	cml("th", "Colour");
	cml("th", "Hex");
	cml("th", "Swash");
	cml_end();
	tablerow("White",          "#EBE3E4");
	tablerow("Black",          "#17181F");
	tablerow("Green",          "#B7E57F");
	tablerow("Sage",           "#9FAC6B");
	tablerow("Yellow",         "#FDD307");
	tablerow("Deep Yellow",    "#FCBC00");
	tablerow("Orange",         "#DB8007");
	tablerow("Blue",           "#06C0DC");
	tablerow("Deep Blue",      "#059BB3");
	tablerow("Blue Grey",      "#607A90");
	tablerow("Dark Blue Grey", "#066374");
	tablerow("Pink",           "#F5C9E3");
	tablerow("Deep Pink",      "#D6A0C0");
	cml_end();

	endpage();
}

#undef tablerow
