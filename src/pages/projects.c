
#include <cml.h>
#include <partial.c>
#include <projects.c>

static void _p_projects(struct project_t *p)
{
	cml_new("table");
	cml_new("tr");
	cml("th", "Name");
	cml("th", "Kind");
	cml("th", "Status");
	cml("th", "URL");
	cml("th", "Description");
	cml_end(); /* tr */
	for ( ; p->name != NULL ; p++)
	{
		cml_new("tr");
		cml("td", "%s", p->name);
		cml("td", "%s", p->kind);
		cml("td", "%s", p->status);
		cml("td", "<a href='%s'>%s</a>", p->link, p->link);
		cml("td", "%s", p->desc);
		cml_end(); /* tr */
	}
	cml_end(); /* table */
}

void p_projects(void)
{
	page("Contact");

	cml("h2", "Projects");
	cml_noend("hr");

	cml("p", "My code is a little scattered between Git hosters, but my new repos are largely kept on Tangled.");
	cml("p", "I keep some projects on Codeberg and some on Github. I started migrating to Codeberg but haven't quite finished.");

	_p_projects(_current_projects);

	cml_noend("br");
	cml_new("details");
	cml("summary", "Older Projects");
	cml_noend("br");
	_p_projects(_older_projects);
	cml_end(); /* summary */

	cml("h3", "Key");

	cml_new("table");
	cml_new("tr");
	cml("td", "WIP");
	cml("td", "In progress and not dead/abandoned. Some of these projects may not have received recent commits, but they're not completely lost.");
	cml_end(); /* tr */
	cml_new("tr");
	cml("td", "Active");
	cml("td", "Feature-complete and receives few pushes, except for bugfixes or small features.");
	cml_end(); /* tr */
	cml_new("tr");
	cml("td", "Hold");
	cml("td", "Not dead/abandoned but not currently being worked on.");
	cml_end(); /* tr */
	cml_new("tr");
	cml("td", "Finished");
	cml("td", "Feature-complete and only receives pushes for bugfixes.");
	cml_end(); /* tr */
	cml_new("tr");
	cml("td", "Abandoned");
	cml("td", "Not feature-complete and archived.");
	cml_end(); /* tr */
	cml_end(); /* table */

	cml_noend("br");

	endpage();
}
