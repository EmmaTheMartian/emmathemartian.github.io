
#include <cml.h>
#include <partial.c>
#include <projects.c>

void p_projects(void)
{
	page("Contact");

	cml("p", "I keep some projects on Codeberg and some on Github. I started migrating to Codeberg but haven't quite finished.");

	cml("h2", "Projects");
	cml_new("table");
	cml_new("tr");
	cml("th", "Name");
	cml("th", "Kind");
	cml("th", "Status");
	cml("th", "URL");
	cml("th", "Description");
	cml_end();
	for (struct project_t *p = &_projects[0] ; p->name != NULL ; p++)
	{
		cml_new("tr");
		cml("td", "%s", p->name);
		cml("td", "%s", p->kind);
		cml("td", "%s", p->status);
		cml("td", "<a href='%s'>%s</a>", p->link, p->link);
		cml("td", "%s", p->desc);
		cml_end();
	}
	cml_end();

	cml("h2", "Key");

	cml_new("table");
	cml_new("tr");
	cml("td", "WIP");
	cml("td", "In progress and not dead/abandoned. Some of these projects may not have received recent commits, but they're not completely lost.");
	cml_end();
	cml_new("tr");
	cml("td", "Active");
	cml("td", "Feature-complete and receives few pushes, except for bugfixes or small features.");
	cml_end();
	cml_new("tr");
	cml("td", "Hold");
	cml("td", "Not dead/abandoned but not currently being worked on.");
	cml_end();
	cml_new("tr");
	cml("td", "Finished");
	cml("td", "Feature-complete and only receives pushes for bugfixes.");
	cml_end();
	cml_new("tr");
	cml("td", "Abandoned");
	cml("td", "Not feature-complete and archived.");
	cml_end();
	cml_end();

	endpage();
}
