
#include <cml.h>
#include <partial.c>

static void p_contact(void)
{
	page("Contact");

	cml("h1", "Contact & Accounts");
	cml("p", "I'm not on much social media, and the ones that I rarely check those that I do have accounts on.");
	cml("p", "You may find me out in the wild on other platforms, but aside from the listed ones here I'm mostly inactive.");

	cml_new("ul");
	cml("li", "Discord: <code>@emmathemartian</code> (send me the word \"glados\" so I can differentiate from spam!)");
	cml("li", "E-Mail: <a href='mailto:me@emmelinecoats.com'>me@emmelinecoats.com</code> (mailto)");
	cml("li", "<a href='https://tangled.org/@emmathemartian.tngl.sh'>Tangled</a>");
	cml("li", "<a href='https://github.com/emmathemartian'>GitHub</a>*");
	cml("li", "<a href='https://codeberg.org/emmathemartian'>Codeberg</a>*");
	cml("li", "<a href='https://modrinth.com/user/emmathemartian'>Modrinth</a>*");
	cml("li", "<a href='https://www.curseforge.com/members/emmathemartian'>CurseForge</a>*");
	cml_end();

	cml("p", "*I do not check these often, prefer another method of contact.");
	cml("p", "I'm primarily active on Discord, I highly recommend DM'ing me or pinging me somewhere to get my attention.");
	cml("p", "If you're in the modded Minecraft community too then we likely have a mutual server or too. Feel free to say hi!");

	endpage();
}
