
#include <cml.h>
#include <partial.c>

#define sep() do { cml_noend("br"); cml_noend("hr"); cml_noend("br"); } while (0)

static void p_index()
{
	page("Index");

	cml("h1", "Hiya! I'm Emmeline");

	cml("p", "I'm a programmer who enjoys developing compilers/interpreters, game development, APIs/tooling, and learning");

	cml_noend("br");

	cml("p", "If you're trying to contact me, you can find my info <a href='/contact/'>here</a>.");
	cml("p", "If you're looking for my projects, you can find them <a href='/projects/'>here</a>.");
	cml("p", "Otherwise, you can find the rest of the pages using the navigation bar above.");

	cml_noend("br");

	cml("p",
		"Here's a fun fact about this site: I dislike writing HTML, instead, \
		I wrote this website in C. Yes, C. You can view the site's source code \
		<a href='https://github.com/emmathemartian/emmathemartian.github.io'>here</a>."
	);

	sep();

	cml("h2", "Software");
	cml("p", "A list of the software I use.");
	cml("p",
		"In the future I plan to reinstall my OS and make it substantially \
		more minimal. I do use all of this software daily, but I could easily \
		do without most of it."
	);
	cml("p", "<strong>Desktop</strong>");
	cml_new("ul");
	cml("li", "<a href='https://artixlinux.org/'>Artix Linux</a> - Operating system");
	cml("li", "<a href='https://github.com/OpenRC/openrc'>OpenRC</a> - Init system");
	cml("li", "<a href='https://i3wm.org/'>i3</a> - Window manager");
	cml("li", "<a href='https://picom.app/'>Picom</a> - Compositor");
	cml("li", "<a href='https://zsh.org/'>ZSH</a> - Shell");
	cml("li", "<a href='https://ohmyz.sh/'>Oh My ZSH</a> - Shell plugins and such (<code>git zsh-syntax-highlighting zsh-autosuggestions</code>)");
	cml("li", "<a href='https://starship.rs/'>Starship</a> - Prompt");
	cml("li", "<a href='https://sdkman.io/'>SDKMAN!</a> - Java version manager");
	cml("li", "<a href='https://alacritty.org/'>Alacritty</a> - Terminal emulator");
	cml("li", "<a href='https://dunst-project.org/'>Dunst</a> - Notification daemon");
	cml("li", "<a href='https://polybar.github.io/'>Polybar</a> - Bar");
	cml("li", "<a href='https://github.com/davatorium/rofi/'>Rofi</a> - Launcher");
	cml("li", "<a href='https://feh.finalrewind.org/'>feh</a> - Backgrounds");
	cml("li", "<a href='https://opentabletdriver.net/'>OpenTabletDriver</a> - Drawing tablet support (Wacom Intuos)");
	cml("li", "<a href='https://pipewire.org/'>Pipewire</a> - Audio (+pipewire-pulse)");
	cml("li", "<a href='https://gitlab.freedesktop.org/pipewire/wireplumber/'>Wireplumber</a> - Pipewire session manager");
	cml("li", "<a href='https://freedesktop.org/software/pulseaudio/pavucontrol/'>Pavucontrol</a> - Volume manager");
	cml("li", "<a href='https://git.kernel.org/pub/scm/network/connman/connman.git/'>Connman</a> - Connection manager");
	cml("li", "<a href='https://github.com/firecat53/networkmanager-dmenu'>networkmanager-dmenu</a> - Wifi settings menu");
	cml("li", "<a href='https://www.startpage.com/en/'>Startpage</a> - Search engine");
	cml_end();
	cml("p", "<strong>Apps</strong>");
	cml_new("ul");
	cml("li", "<a href='https://vscodium.com/'>VSCodium</a> - Text editor, actively looking for alternatives (might make my own)");
	cml("li", "<a href='https://neovim.io/'>Neovim</a> - Text editor");
	cml("li", "<a href='https://www.jetbrains.com/idea/'>IntelliJ IDEA</a> - Java/Kotlin IDE, looking for alternatives");
	cml("li", "<a href='https://zen-browser.app/'>Zen</a> - Browser");
	cml("li", "<a href='https://github.com/lxde/pcmanfm'>pcmanfm</a> - File explorer");
	cml("li", "<a href='https://vesktop.dev/'>Vesktop</a> - Discord");
	cml("li", "<a href='https://prismlauncher.org/'>Prism Launcher</a> - Minecraft Launcher");
	cml("li", "<a href='https://store.steampowered.com/about/'>Steam</a> - Games");
	cml("li", "<a href='https://www.aseprite.org/'>Aseprite</a> - Pixel art");
	cml("li", "<a href='https://krita.org/en/'>Krita</a> - Art");
	cml("li", "<a href='https://inkscape.en.softonic.com/'>Inkscape</a> - Vector art");
	cml("li", "<a href='https://lmms.io/'>LMMS</a> - DAW");
	cml("li", "<a href='https://apps.ankiweb.net/'>Anki</a> - Flashcards");
	cml("li", "<a href='https://deadbeef.sourceforge.io/'>DeaDBeeF</a> - Music player (desktop)");
	cml("li", "<a href='https://www.foobar2000.org/'>Foobar2000</a> - Music player (mobile)");
	cml("li", "<a href='https://github.com/alvr-org/ALVR'>ALVR</a> - Desktop VR");
	cml_end();
	cml("p", "<strong>Languages</strong>");
	cml_new("ul");
	cml("li", "<a href='https://lua.org/'>Lua</a> - Scripts");
	cml_end();

	sep();

	cml("h2", "Cool Albums+Playlists");
	cml("p", "Peak music you should listen to.");
	cml_new("ul");
	cml("li", "<a href='https://youtube.com/playlist?list=PLdkSCrAWCqGYWVj8uT81J3dWxE3sXJqpv'>UNBEATABLE: DEMO TAPES</a>");
	cml("li", "<a href='https://youtu.be/RKybAhTw8iE'>Ninajirachi - I Love My Computer</a>");
	cml_end();

	cml_noend("br");

	cml("h2", "Cool Sites");
	cml("p", "Simply a collection of cool websites I've found.");
	cml_new("ul");
	cml("li", "<a href='https://neomojimixer.com/'>Neomojimixer</a> - Neomoji Creator!");
	cml("li", "<a href='https://quaternions.online/'>Quaternions</a> - Quaternion visualizer");
	cml("li", "<a href='https://wareya.github.io/webtyler/'>Webtyler</a> - Tile generator tool");
	cml_end();

	sep();

	cml("h2", "My Circle");
	cml_new("div");
	button("https://gingershaped.computer", "https://gingershaped.computer/8831/button.png", "ginger's 88x31 button");
	button("https://violunae.dev", "https://violunae.dev/assets/badges/violunae.png", "violunae.dev");
	cml_end();

	cml("p", "My Button:");
	button("https://emmelinecoats.com", "/static/button.png", "emmelinecoats.com");
	int f = cml_getfmt();
	cml_setfmt(0);
	cml_new("pre");
	cml("code", "&lt;a href=\"https://emmelinecoats.com/\"&gt;\n\t&lt;img src=\"https://emmelinecoats.com/static/button.png\" alt=\"emmelinecoats.com\" width=\"88\" height=\"31\" decoding=\"async\" /&gt;\n&lt;/a&gt;");
	cml_end();
	cml_setfmt(f);

	endpage();
}
