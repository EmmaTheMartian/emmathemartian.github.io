
#include <cml.h>
#include <partial.c>

void p_thoughts_modernminecraft(void)
{
	page("Thoughts - Modern Minecraft");

	cml("a href='/thoughts/'", "Back to thoughts");

	cml("h1", "Thoughts on Modern Minecraft");
	cml_noend("hr");

	cml("p",
"I have pretty strong opinions on Minecraft and how it's changed \
over time. I first started playing it 12 years ago (as of \
07/07/2025), so maybe a lot of this is just nostalgia talking, \
but I do have misc opinions on modern Minecraft that very much \
are not nostalgia-led.");
	cml("p",
"As you're reading this, I can almost guarantee you will \
disagree with a lot of my points, maybe even all of them. So be \
it, I'm not here to change your opinion, I'm here to express \
mine. If you do disagree, feel free to contact me and explain \
but if you contact me saying something like \"your opinions on \
modern minecraft are wrong\" then I'm going to ignore you. \
Opinions are subjective, suck it up and deal with it.");

	cml_noend("br");
	cml("h2", "It's a sandbox... right?");
	cml_noend("hr");
	cml("p", "After Microsoft's acquisition of Mojang, I noticed that the updates started to... slowly lose the creative feeling of Minecraft.");
	cml("p",
"The game is advertised as a sandbox, exploration, and crafting \
game. And it does very well at those, although the recent \
updates have started moving away from some of these aspects and \
aiming for a much more RPG-feel.");
	cml("p",
"Don't get me wrong, I love RPG games. I love being thrown into \
a fantasy world and playing the role of a hero, learning about \
the world, and defeating the final boss. But I also like sitting \
back, relaxing, and building a cute house. Minecraft does very \
well at the relaxing part... unless I'm in a modern version.");
	cml_noend("br");
	cml("p",
"Take 1.14, the Village & Pillage update (aka the Texture \
Update). This update is *very* clearly RPG. Looking at the \
additions for the sandbox feeling of the game... there are not \
too many. I mean, new variants for signs and walls are cute, and \
I love the Cornflower and Lily of the Valley. But the *majority* \
of the update is pretty clearly RPG.");
	cml_noend("br");
	cml("p",
"How about 1.15. On a surface level, this update seems like just \
bees, which are adorable and I'm a huge fan of. Below the surface, \
though, were a LOT of bug fixes and internal changes. The internal \
changes are why the major version was incremented. Ultimately, this \
update has no RPG-like content and really just made farming a little \
more interesting. I quite like this update.");
	cml("p",
"You might remember that I claimed Mojang got \"lazy\" with this \
update, though after a *lot* of people flaming me on this, my \
opinion on it has changed. I was unfair to Mojang with this \
critique, but I'll leave the original here so you can \
understand *why* I was flamed for it.");
	cml_new("details");
	{
		cml("summary", "Original Critique (no longer my opinion!)");
		cml("p",
"How about 1.15... oh wait... Mojang got lazy on that update \
(remember this, it's a common trend that I will cover later). \
Bees are adorable, I'm a fan of them. This update was good, \
although definitely not deserving of a major version increment.");
	}
	cml_end();
	cml_noend("br");
	cml("p",
"1.16... how do I even start... 1.16 is when the game started \
taking a turn for the worse in my opinion. Yes, the Nether \
*definitely* needed an update, but there are MAJOR issues with \
this version. Primarily...");
	cml("p",
"Netherite. Netherite is *obnoxiously* rare. If I want to say, \
gather every item, or get maxxed out tools, or anything else, \
now I need to grind for actual real life HOURS to get even 1 or \
2 Netherite tools/armour. This is insane, genuinely insane. \
Diamonds are rare, sure, but you'll find a good many within 1 \
hour. Netherite though... I've spent 2 hours mining for it and \
found nothing. Not to mention you need to find FOUR of the ores \
to get ONE ingot to upgrade a SINGLE tool/armour piece.");
	cml("p",
"*Ignoring* Netherite, 1.16 is a pretty solid update. Tons of \
new unique building blocks that aren't intrusive. It made the \
Nether just a little bit more enjoyable to explore.");
	cml_noend("br");
	cml("p", "Now for 1.17. Overall, this update was not bad, I do genuinely like it. I have no negative comments about it.");
	cml("p",
"oh wait. Mojang said that they had to split this update because \
it was too big. If an update is out of scope, *don't announce it \
all at once.* Mojang made a huge blunder with this update in \
that sense, and it caused them to keep adding \"new\" content in \
the subsequent updates to add the features that were promised \
from this one.");
	cml_noend("br");
	cml("p", "1.18! Now we actually get the world generation promised in 1.17. Thanks Mojang (sarcastic).");
	cml_noend("br");
	cml("p",
"1.19... oh god. Alright this update REALLY caused a nosedive \
for my enjoyment of modern versions. The swamp is cool, frogs \
and Allays are cute. Here's the issue: The Deep Dark.");
	cml("p",
"The Deep Dark does not, in any way, shape, or form, fit Minecraft. \
This isn't even something that can be argued, looking at the \
update trends in the 1.12 and previous versions, *nothing* \
alluded to adding mobs that were almost unkillable, would nearly \
one-shot you if you **made too much noise**, and had basically \
no useful loot. The Deep Dark punishes you for playing the game. \
It's not a \"fun challenge\" either, I have to play with keep \
inventory or in peaceful mode in the Deep Dark because I don't \
want to get instakilled because I was walking in the wrong place. \
The Deep Dark is also huge. Don't believe me? Download a minimap \
mod and open the cave map on the lower Y-levels. You'll find a \
Deep Dark, and it'll be *big*.");
	cml("p",
"There is absolutely no reason to punish the player for mining. \
That's stupid, completely stupid. If the Warden spawned solely \
in the Ancient Cities and the Deep Dark weren't so enormous, \
*maybe* I could enjoy this update. But the way that Mojang went \
about this update brings me no joy.");
	cml("p", "Oh and we also got more features previously promised from 1.17! Thanks Mojang (sarcastic).");
	cml_noend("br");
	cml("p", "Alright now for 1.20.");
	cml("p",
"1.20 also introduces one of the single WORST items: Netherite \
Upgrade Templates. Remember when I said that 1.16's Netherite \
really annoyed me? Yeah they made it worse. Now you have to go \
to Bastions to find Upgrade Templates to upgrade your gear. \
Remember how it would take hours to find Netherite? Yeah now you \
need to also spend more hours grinding Bastions hoping to find \
an upgrade template. Luckily you can duplicate them!... using 7 \
diamonds. What the heck???");
	cml("p",
"So let me spell this out real quick: A \"relaxing sandbox game\" \
now wants you to spend actual hours of your time (perhaps \
multiple real life DAYS) grinding to find Netherite, an Upgrade \
Template, AND metric tonnes of diamonds just to get a SINGLE set \
of Netherite gear. What part of that is relaxing??? Mining in \
the Nether certainly isn't relaxing, it's nightmarish. Mining in \
the Overworld isn't relaxing anymore either thanks to the Deep \
Dark taking up dang near half of the world.");
	cml("p", "In terms of what *good* came from 1.20, Cherry Blossom trees are cute. That's the only part of this update that I really like.");
	cml("p", "Oh and we also got more promised features from 1.17 (archeology). Thanks Mojang (sarcastic).");
	cml_noend("br");
	cml("p",
"Alright now for 1.21. This update REALLY annoys me. Trial \
Chambers?? What part of this is relaxing sandbox. Okay cool new \
building blocks (Tuff and Copper block sets) and automated \
crafting, but everything else REEKS of not-creativity. Oh and \
the Mace, a weapon that can one-shot a Warden... I haven't seen \
this level of power creep since Tearalaments dropped in Yu-Gi-Oh. \
The Heavy Core is also obnoxiously rare, even more so than \
Netherite. I haven't seen this level of rarity since starlight \
rares dropped in Yu-Gi-Oh (I don't care that I made this joke \
twice).");
	cml("p", "We also got stuff promised from 1.17 (bundles), is this getting old yet? Anyway, thanks Mojang (sarcastic). (1.21.2: Bundles of Bravery)");
	cml("p",
"To add, the Pale Garden (1.21.4: The Garden Awakens). This is \
very blatantly just Mojang trying to bandwagon on the Dweller \
mod trend. The mods from that trend are bad, and the Creaking \
really isn't that much better. I love the Pale Garden itself, a \
desolate forest with a fun wood type and resin bricks, sign me \
up! But the Creaking... not great. I will mention, the Creaking \
would have fit well into the End with some tweaks. The End \
desperately needs something to make it a little less boring, and \
the Pale Garden would have fit in **remarkably** there.");
	cml("p",
"Alright now for the GOOD of 1.21. It's not even from 1.21.0, \
it's from 1.21.5 (Spring to Life). This update makes the game \
feel way more alive, I love it! I have no critiques on this \
version.");
	cml("p",
"Okay, 1.21.6 (Chase the Skies). I'm bittersweet about this \
update. I've always theorized/headcannoned that the Ghasts came \
from the Overworld, and seeing that come to life was awesome. \
But something about this update just feels weird in terms of the \
Minecraft theme... I'm not sure what it is though, so I'm not \
counting this as a negative point. I will however mention that \
Happy Ghasts are hecking adorable, so that is a plus :3");
	cml("p",
"And now 1.21.7... the marketing ploy update... This one just \
adds references to A Minecraft Movie. It's only a music disc and \
a painting so I'm not really annoyed by it, but I hope that \
Mojang doesn't bring their marketing magic from Bedrock to Java... \
I'll be quick to remove it via a mod if so.");
	cml_noend("br");
	cml("p",
"You might be thinking, \"but you can ignore the RPG aspects.\" \
And to that I say: Nope. I can't, not when almost half of the \
modern game is RPG and the recent updates don't add much of \
interest to me. That's not \"ignorable,\" that's turning a blind \
eye.");
	cml("p",
"Ultimately what this means is that if I want to play vanilla \
Minecraft for the sake of relaxing, modern Minecraft just... \
doesn't sit right for me. Any version before 1.13, heck yeah, \
but after then... it just doesn't feel like \"Minecraft\" to me \
anymore.");

	cml_noend("br");
	cml("h2", "Textures");
	cml_noend("hr");
	cml("p",
"Okay so this point is really... *really* subjective. Most \
people I've talked to about this like the new textures, and yeah, \
I do too. But unlike most people, I like the older textures more. \
I like the crunchy and saturated textures, they feel oddly \
charming.");
	cml("p",
"The new textures don't feel like they have as much love put \
into them, they feel more dull and less fun to me. I do like \
them, but they don't give me the same feeling that the old \
textures do.");
	cml("p", "This could very well just be nostalgia talking :P");

	cml("h2", "Mob Votes & Mojang Laziness");
	cml("p", "Mob votes are... not great in my opinion. Mojang could easily add all three of the mobs, but instead they just... don't.");
	cml("p", "Mojang feels pretty lazy in that regard. Then there's 1.15, which is just a joke of a \"major-version-incrementing\" update.");
	cml("p",
"I do understand that there are internal changes too, I'm a \
modder and I follow the game's bug tracker via a little Discord \
webhook bot, I know when Mojang are working hard on bug \
squashing and such, and I know when they're making internal \
changes too because... my mods break. Despite that though, some \
updates are still really lackluster. I'm hoping that the game \
drops update scheme helps with this, and so far it does seem to \
be.");
	cml("p", "Speaking of, just a few days ago (as of 07/07/2025) the Copper Golem was announced, so maybe they are fixing their mob vote tomfoolery.");

	cml_noend("br");
	cml("h2", "\"Fixing\" the Modern Game");
	cml_noend("hr");
	cml("p",
"Okay! So I've explained why I don't like the updates, but I do \
like modding on new versions since there's better tooling and \
there are lots of amazing mods made for new versions, and since \
I happen to *be* a modder, I can simply tweak parts of the game \
that I dislike.");
	cml("p",
"This is a list of what I would change in modern versions via a \
mod to make it appeal more to me. I do plan to make a mod(pack) \
using these tweaks in the future, if so then I'll add a link to \
this page :D");
	cml("p",
"Note that this is not intending to recreate Alpha or Beta in a \
modern version, it's intending to make the modern version lean \
way more into the sandbox, exploration, and crafting aspects of \
Minecraft and remove or tweak a lot of the RPG aspects.");
	cml_noend("br");
	cml_new("ul");
	cml("li", "(1.9) Remove Elytra boosting with fireworks. I want to make players build Minecart networks again.");
	cml("li", "(1.13) Remove Phantoms. Let me be a night owl in peace.");
	cml("li", "(1.14) Remove raids and Pillager Patrols.");
	cml("li", "(1.14) Remove Pillager Outposts.");
	cml("li", "(1.14) Remove or rework Wandering Traders. I think it would be more fun if they didn't just pop up out of nowhere... Also their trades would need to be completely remade so that they're actually worth it.");
	cml("li", "(1.16) Remove or completely rework Netherite. If I rework it then it will function as an ore found uncommonly/rarely (redstone or diamond rarity) in the Nether that can be used for misc crafting recipes.");
	cml("li", "(1.16) Remove Netherite tools and armour.");
	cml("li", "(1.19) Remove the Deep Dark, Ancient Cities, and Warden. Perhaps they can be moved to their own dimension.");
	cml("li", "(1.20) Remove Upgrade Templates.");
	cml("li", "(1.21) Remove Trial Chambers.");
	cml("li", "(1.21.4) Move Pale Garden to be an End Biome.");
	cml_end();

	cml_new("blockquote");
	cml("p",
"One of my friends mentioned that moving the Deep Dark into \
their own dimension would likely be a terrible idea. They said \
it would create \"another End,\" citing that the End is extremely \
bland and has almost nothing interesting to it. Moving the Deep Dark \
to it's own dimension would create another one of these dimensions. \
I agree with this, and think that just flat-out removing it would likely \
be better.");
	cml_end();

	endpage();
}
