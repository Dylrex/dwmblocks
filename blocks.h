//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{"󰓇", "dwm-spotify",					1,		14},
	{"󰚰", "pacupdates",					3600,		8},
	{"󰎕", "dwm-news",					1800,		13},
	{"󰇮", "dwm-mailbox",					1800,		12},
	/* {"", "dwm-netuse",					1,		9}, */
	/* {"", "dwm-weather",					3600,		11}, */
	{"", "dwm-volume",					30,		10},
	{"", "dwm-clock",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
