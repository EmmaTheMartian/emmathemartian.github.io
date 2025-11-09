
#include <cml.h>
#include <partial.c>

void p_thoughts_forgevsfabric(void)
{
	page("Thoughts - (Neo)Forge vs Fabric");

	cml("a href='/thoughts/'", "Back to thoughts");

	cml("h1", "Thoughts on (Neo)Forge vs Fabric");

	cml("p", "This is one of my hotter takes. I think that (Neo)Forge and Fabric are equally bad/good mod loaders.");
	cml("p",
		"People often say that Fabric is the \"lighter\" loader, but in \
		reality that's very much not the case anymore. They both have a \
		plethora of performance mods, and most of them are xplat now too. \
		Forge performance especially improved post 1.15, and the two \
		basically launch and run at the same speed in most cases."
	);
	cml("p",
		"Edit: I've been talking with someone who claims that Fabric has \
		better *server* performance. I don't ever mess with servers, so I \
		can't really comment on *my* views for this, but I did want to mention \
		this at the very least. I'm assuming that a large part of this performance \
		difference would be due to the Forge EventBus. Pub/sub is cool but \
		usually lacks in performance to my knowledge."
	);
	cml("p",
		"I also see people saying that Fabric is lighter because it \
		doesn't package the library with it. The Fabric API is packaged \
		into many smaller modules, which I've seen people jar-in-jar \
		before (Sodium JiJs part of the library). This is utterly stupid, \
		*every* single modpack on Fabric is going to use FAPI, meaning \
		that JiJ'ing it is just wasting resources. Additionally, excluding \
		the API really doesn't affect the heaviness of the loader at all."
	);
	cml("p",
		"Though my major issue with FAPI is the modular structure of it. \
		Sure, a modular structure is nice... until you think about the \
		fact that it's distributed monolithically for users *and* \
		developers. Nearly every Fabric developer depends on the whole \
		FAPI and not modules since it's a million times more convenient. \
		The API being split into multiple modules just feels really \
		annoying to manage. Then again, I don't work on the FAPI, so I \
		could very well be mistaken on the ease-of-development benefit \
		that may or may not exist. I'd love for a FAPI developer to get \
		in contact with me to comment on the modular structure of it."
	);
	cml("p",
		"As for (Neo)Forge, I also think that it has issues. Notably, \
		the event bus... I don't like \"magic code\" (macros, \
		annotations, etc), and the Forge event bus is literally that. I \
		*do* however like that the event bus provides events for most of \
		the places where I would otherwise need to mixin, which means \
		that mod compatibility is much easier. On the other hand, \
		there are great tools for developing mixins now (mc-dev and mods \
		such as mixin trace), which help significantly... until someone \
		decides to @Overwrite where they REALLY didn't need to. That's a \
		different issue though."
	);
	cml("p",
		"In terms of modding, both loaders are equally bad/good, and \
		it's really just personal preference. I primarily mod on \
		NeoForge since that's where I have the most experience and am \
		most comfortable, but I can develop on Fabric too."
	);
	cml("p",
		"In terms of modpacking, NeoForge has more potential right now \
		*in my opinion*. Connector helps significantly in this, however \
		opposite projects such as Kilt may make each loader perfectly \
		balanced (as all things should be /reference). Ultimately, when \
		I am modpacking, I use whichever loader provides the core mods \
		for my modpack. I.e, if I'm making a tech pack around GTCEuM, \
		I'll use NeoForge 1.21.1, since that's the version that the mod \
		targets. For a Spectrum pack, I'll use Fabric 1.21.1 for the \
		same reason."
	);

	endpage();
}
