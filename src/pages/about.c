
#include <cml.h>
#include <partial.c>

void p_about(void)
{
	page("About");

	cml("h1", "About Me");

	cml("p", "Hai again, I'm Emmeline! You can also just call me Emma.");
	cml("p", "Please note: this info is just me info-dumping about my interests and is *not* comprehensive nor completely detailed.");
	cml("p", "If you want more details about me or one of my interests, feel free to <a href='/contact/'>contact</a> me and ask!");
	cml("p", "Some random things about me that don't really fit in other categories:");
	cml_new("ul");
	cml("li", "My MBTI is INTJ-T. In my opinion, MBTIs tell very little about a person, but they're still fun.");
	cml("li", "My favourite drink is hot chocolate, then lemonade as a close second. I don't drink anything carbonated and I very rarely drink anything caffeinated.");
	cml("li", "I love fog, rain, and snow. Calm sunny days with a breeze are also quite comforting.");
	cml("li", "My favourite fonts are <a href='https://github.com/IdreesInc/Miracode/'>Miracode</a>, IBM Plex Mono, and CaskaydiaCove.");
	cml("li", "My favourite colour is yellow!");
	cml_end();

	cml_noend("hr");
	cml("h2", "Games");

	cml("p", "I primarily play modded Minecraft, Terraria, and an assortment of rhythm games.");
	cml("p", "I enjoy automation/logistics (modded Minecraft and Factorio especially) and a nice challenge (modded Terraria and rhythm games).");
	cml("p", "As of writing this, I've been playing Terraria with the Infernum mod. It's uh... painful. I just beat Yharon after 573 attempts. SCal and the Exo Mechs are... pain.");
	cml_new("details");
	{
		cml("summary", "Favourite Games");
		cml("p", "Favourites");
		cml_new("ul");
		cml("li", "Modded Minecraft");
		cml("li", "Beat Saber");
		cml("li", "osu!");
		cml("li", "Portal");
		cml("li", "Terraria");
		cml("li", "Vanilla Minecraft Beta 1.7.3");
		cml("li", "Balatro");
		cml("li", "Factorio");
		cml("li", "UNBEATABLE");
		cml_end();
		cml("p", "Likes");
		cml_new("ul");
		cml("li", "Rhythia/SoundSpace+");
		cml("li", "Forager");
		cml("li", "Project Sekai");
		cml("li", "Aloft");
		cml("li", "SNKRX");
		cml("li", "Borderlands 2");
		cml("li", "Stardew Valley");
		cml("li", "Satisfactory");
		cml("li", "Haste");
		cml_end();
	}
	cml_end();

	cml_noend("hr");
	cml("h2", "Music");
	cml("p", "I primarily listen to EDM (+subgenres), 2000s alternative rock, emo, metal, and indie rock.");
	cml("p", "I also enjoy Vocaloid music. For the 2-ish Vocaloid enjoyers reading this, my favourites are GUMI, Flower, Teto, and Len (and Miku, duh).");
	cml("p", "I like to collect my favourite albums on vinyl, currently my collection is small but consists of Favourite Worst Nightmare and AM by Arctic Monkeys and Hot Fuss by The Killers. I'm trying to hunt down Tourist History by Two Door Cinema Club.");
	cml("p", "As for genres I dislike: country. Pretty much everything else I either enjoy or am neutral about.");
	cml("p", "My favourite songs are Old Yellow Bricks by Arctic Monkeys, Looking for Edge of Ground by Camellia, and Abnormality Dancin' Girl by MICCHI and Drazically.");
	cml("p", "My favourite albums are Favourite Worst Nightmare by Arctic Monkeys and Prefer Not to Say by Tanger.");
	cml_new("details");
	{
		cml("summary", "Favourite Artists (ordered alphabetically)");
		cml_new("ul");
		cml("li", "Arctic Monkeys");
		cml("li", "Bullet for my Valentine");
		cml("li", "Camellia");
		cml("li", "Cjbeards");
		cml("li", "Colbreakz");
		cml("li", "Creo");
		cml("li", "Dirty Palm");
		cml("li", "Fall Out Boy");
		cml("li", "femtanyl");
		cml("li", "hkmori");
		cml("li", "In Love With a Ghost");
		cml("li", "Kotori");
		cml("li", "KSHMR");
		cml("li", "Ludicin");
		cml("li", "LuLuYam");
		cml("li", "Paramore");
		cml("li", "Porter Robinson");
		cml("li", "Senses Fail");
		cml("li", "SOTAREKO");
		cml("li", "STOMACH BOOK");
		cml("li", "STYXVII");
		cml("li", "System of a Down");
		cml("li", "Tanger");
		cml("li", "The Amity Affliction");
		cml("li", "Three Days Grace");
		cml("li", "Two Door Cinema Club");
		cml("li", "Yellowcard");
		cml_end();
	}
	cml_end();

	cml_noend("hr");
	cml("h2", "Visual Media");
	cml("p", "I don't watch very many movies, but I do love Lord of the Rings (the books are better, imo) and Interstellar.");
	cml("p", "My favourite Disney films are Lilo and Stitch and Big Hero 6. I have... quite a lot of Stitch merchandise...");
	cml("p", "I very rarely watch cable or anything on a TV. I usually just watch Netflix on my phone or something.");
	cml("p", "Ultimately, when I watch visual media, I'm usually watching a YouTube video pertaining to my interests.");
	cml("p", "I have a list of my favourite movies and TV shows <a href='/misc/tv-and-movies/'>here</a>.");

	cml_noend("hr");
	cml("h2", "Programming");
	cml("p", "I primarily work in C(99), C#, and Java. I use the latter only for Minecraft modding and the former two for most of my other projects.");
	cml("p", "I don't particularly like Java but since I've used it so much, I've grown to at least be okay with using it.");
	cml("p", "My favourite languages are C and Lua.");
	cml("p", "My first language was Python, which I generally don't use much anymore. I really only use it for small scripts, prototypes, and CLI apps now.");
	cml("p", "C++ is my least favourite language. You can read more about why <a href='/thoughts/cplusplus/'>here</a>.");
	cml("p", "I quite like niche, small, and/or new languages. Lua variants (Fennel, Moonscript, Teal, etc) are some of my favourites of these.");
	cml_noend("br");
	cml("p", "Regarding C, I use it a lot since I really just... know it off the top of my head. I don't know the whole standard library, of course, but the syntax and common stdlib make it very easy for me to just sit back and write code with.");
	cml("p", "With C, I can focus on actually writing code instead of reading docs or searching for answers related to the language itself. Being able to dedicate so much time to actually *writing* code allows me to get a lot done quite fast.");
	cml_noend("br");
	cml_new("details");
	{
		cml("summary", "Favourite/Liked/Disliked Languages");

		cml("p", "Favourites");
		cml_new("ul");
		cml("li", "C");
		cml("li", "Lua");
		cml_end();

		cml("p", "Likes");
		cml_new("ul");
		cml("li", "V");
		cml("li", "Fennel");
		cml("li", "Moonscript");
		cml("li", "Nim");
		cml("li", "Java");
		cml("li", "C#");
		cml_end();

		cml("p", "Neutral");
		cml_new("ul");
		cml("li", "Python");
		cml("li", "Kotlin");
		cml_end();

		cml("p", "Dislikes");
		cml_new("ul");
		cml("li", "JavaScript");
		cml("li", "TypeScript");
		cml("li", "C++");
		cml("li", "Rust");
		cml_end();
	}
	cml_end();

	cml_noend("hr");
	cml("h2", "Minecraft");
	cml("p", "I mod Minecraft quite a lot and play a good bit too. Just as my favourite game genres, I like automation+logistics in Minecraft too.");
	cml("p", "GregTech and IndustrialCraft 2 are my favourite mods, Psi and Hex Casting are also really fun.");
	cml("p", "I have a love-hate relationship with Create. I love the mod itself but dislike that so many modpacks throw it in with zero rebalancing. Create focuses on passive power-generation, meaning that it cripples other tech mods (which usually depend on active power-generation) if left unbalanced.");
	cml("p", "Immersive Engineering and Botania are also super cool.");
	cml_noend("br");
	cml("p", "Most people find my keybinds pretty silly, <kbd>E</kbd> for use/place block, <kbd>Tab</kbd> for inventory, <kbd>Mouse 4</kbd> for crouch, and <kbd>Mouse 5</kbd> for sprint.");

	cml_noend("hr");
	cml("h2", "Assorted Interests and Hobbies");
	cml("p", "I enjoy astronomy, world-building, linguistics, embroidery, and reading.");
	cml("p", "I like making conlangs, usually for my worlds.");
	cml("p", "My favourite book genres are dystopia and fantasy. <i>1974</i> my George Orwell is my favourite book. <i>Ender's Game</i> by Orson Scot Card and <i>The Hitchhiker's Guide to the Galaxy</i> by Douglas Adams are also really good.");

	cml_noend("hr");
	cml("h2", "Emoticons and Emojis");
	cml("p", "I use a plethora of emoticons, including:");
	cml_new("ul");
	cml("li", ":D >:D XD D:");
	cml("li", ";-; ;~;");
	cml("li", ":P :p");
	cml("li", ":O :o");
	cml("li", ":O :o");
	cml("li", ":3 >:3");
	cml("li", ":sob: (😭) :pleading_face: (🥺)");
	cml("li", ":people_hugging: (🫂)");
	cml("li", ":fire: (🔥) :tm: (™️)");
	cml_end();
	cml("p", "I use these to help control the tone of my messages or make jokes.");

	cml_noend("hr");
	cml("h2", "The End");
	cml("p", "Wait did you actually read everything here???");
	cml("p", "Anyway. If there's anything else you want to know about me then feel free to ask personally! Don't worry, I don't bite :3");

	endpage();
}
