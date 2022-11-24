static const char *colorname[] = {
	/* MS Windows Terminal Theme: One Half Light */
	/* 8 normal colors */
	"#383A42", // Black
	"#E45649", // Red
	"#50A14F", // Green
	"#C18301", // Yellow
	"#0184BC", // Blue
	"#A626A4", // Purple
	"#0997B3", // Cyan
	"#FAFAFA", // White

	/* 8 bright colors */
	"#4F525D", // brightBlack
	"#DF6C75", // brightRed
	"#98C379", // brightGreen
	"#E4C07A", // brightYellow
	"#61AFEF", // brightBlue
	"#C577DD", // brightPurple
	"#56B5C1", // brightCyan
	"#FFFFFF", // brightWhite

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#cccccc",
	"#555555",
    "#383A42", // Foreground (258)
    "#FAFAFA", // Background (259)
    "#4F525D", // Cursor color (260)
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
