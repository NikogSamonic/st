static const char *colorname[] = {
	/* MS Windows Terminal Theme: Campbell Powershell */
	/* 8 normal colors */
	"#0C0C0C", // Black
	"#C50F1F", // Red
	"#13A10E", // Green
	"#C19C00", // Yellow
	"#0037DA", // Blue
	"#881798", // Purple
	"#3A96DD", // Cyan
	"#CCCCCC", // White

	/* 8 bright colors */
	"#767676", // brightBlack
	"#E74856", // brightRed
	"#16C60C", // brightGreen
	"#F9F1A5", // brightYellow
	"#3B78FF", // brightBlue
	"#B4009E", // brightPurple
	"#61D6D6", // brightCyan
	"#F2F2F2", // brightWhite

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#cccccc",
	"#555555",
    "#CCCCCC", // Foreground (258)
    "#012456", // Background (259)
    "#FFFFFF", // Cursor color (260)
    "#FFFFFF"  // Selection background (261)
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 258;
unsigned int defaultbg = 259;
static unsigned int defaultcs = 260;
static unsigned int defaultrcs = 261;
