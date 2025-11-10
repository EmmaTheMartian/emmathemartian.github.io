
#ifndef __partial_c__
#define __partial_c__

#include <cml.h>
#include <stdlib.h>
#include <time.h>

static const char *_nav[] = {
	"about",
	"contact",
	"projects",
	"thoughts",
	"misc",
	NULL,
};

void page(char *title)
{
	cml_text("<!DOCTYPE HTML>");
	cml_new("html lang='en'");

	cml_new("head");
	cml("title", "Emma's Website - %s", title);
	cml_noend("link rel='stylesheet' href='/static/style.css'");
	cml_noend("meta charset='UTF-8'");
	cml_noend("meta name='viewport' content='width=device-width, initial-scale=1'");
	cml_end();

	cml_new("body");

	cml_new("nav");
	int f = cml_getfmt();
	cml_setfmt(0);
	cml("a href='/'", "index");
	cml_text(" - ");
	for (const char **p = &_nav[0] ; *p != NULL ; p++)
	{
		cml_newf("a href='/%s/'", (char *)*p);
		cml_text("%s", (char *)*p);
		cml_end();
		if (*(p+1) != NULL)
			cml_text(" - ");
	}
	cml_setfmt(f);
	cml_end();

	cml_new("main");
}

void endpage(void)
{
	cml_end();

	cml_new("footer");
	cml_noend("hr");
	time_t t;
	struct tm *tm;
	time(&t);
	tm = gmtime(&t);
	char *str = malloc(512);
	strftime(str, 512, "%Y-%m-%d %H:%M:%S (GMT)", tm);
	cml("p", "Site compiled at <code>%s</code>", str);
	free(str);
	cml_end();

	cml_end();
	cml_end();
}

void button(char *href, char *src, char *alt, int pixelate)
{
	int f = cml_getfmt();
	cml_setfmt(0);
	cml_new("span");
	cml_newf("a class='button-88x31' href=\"%s\"", href);
	if (pixelate)
		cml_noend("img src=\"%s\" alt=\"%s\" width='88' height='31' decoding='async' style='image-rendering:pixelated;'", src, alt);
	else
		cml_noend("img src=\"%s\" alt=\"%s\" width='88' height='31' decoding='async'", src, alt);
	cml_end();
	cml_end();
	cml_setfmt(f);
}

#endif
