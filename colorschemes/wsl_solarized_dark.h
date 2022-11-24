static const char *colorname[] = {
	/* MS Windows Terminal Theme: Solarized Dark */
	/* 8 normal colors */
	"#002B36", // Black
	"#DC322F", // Red
	"#859900", // Green
	"#B58900", // Yellow
	"#268BD2", // Blue
	"#D33682", // Purple
	"#2AA198", // Cyan
	"#EEE8D5", // White

	/* 8 bright colors */
	"#073642", // brightBlack
	"#CB4B16", // brightRed
	"#586E75", // brightGreen
	"#657B83", // brightYellow
	"#839496", // brightBlue
	"#6C71C4", // brightPurple
	"#93A1A1", // brightCyan
	"#FDF6E3", // brightWhite

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#cccccc",
	"#555555",
    "#839496", // Foreground (258)
    "#002B36", // Background (259)
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
