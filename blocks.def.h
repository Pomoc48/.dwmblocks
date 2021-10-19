//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
	{" ☀️ ", "~/.dwmblocks/blocks/backlight",        1,               0},
	{" 🔊 ", "~/.dwmblocks/blocks/volume",          1,               0},
	{"  ", "~/.dwmblocks/blocks/cpu",              30,              0},
	{" 💻 ", "~/.dwmblocks/blocks/memory",          10,              0},
	{" 🛎️ ", "~/.dwmblocks/blocks/pacupdate",       360,             0},
	{" 🌎 ", "~/.dwmblocks/blocks/network",         5,               0},
	{"  ", "~/.dwmblocks/blocks/battery",          60,              0},
	{"  ", "~/.dwmblocks/blocks/date",  	 	60,              2},
	{" 🕑 ", "~/.dwmblocks/blocks/time",            1,               0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '   |';
