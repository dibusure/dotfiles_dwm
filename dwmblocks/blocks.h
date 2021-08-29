//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{"Load avg:", "uptime | grep 'load average: *' | cut -c 45-48",		 2,		0 },

	{"", "/home/dibusure/.config/dwm/dwmblocks/scripts/volume",		1,		0 },

	{"", "date", 								1,		0 },

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
