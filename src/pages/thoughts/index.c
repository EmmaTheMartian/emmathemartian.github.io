
#include <cml.h>
#include <partial.c>

void p_thoughts_index(void)
{
	page("Thoughts");

	cml("h1", "Thoughts");
	cml("p", "I often find myself explaining my opinions repeatedly, especially my \"hot takes.\" I made this part of my website to explain those in one place so that I don't have to retell them so often.");
	cml("p", "Here are some of my thoughts on different topics:");

	cml_new("ul");
	cml("li", "<a href='/thoughts/cplusplus/'>C++</a>");
	cml("li", "<a href='/thoughts/modern-minecraft/'>Modern Minecraft</a>");
	cml("li", "<a href='/thoughts/forge-vs-fabric/'>(Neo)Forge vs. Fabric</a>");
	cml_end();

	endpage();
}
