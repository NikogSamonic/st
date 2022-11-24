/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* MS Windows Terminal Theme: Campbell {{{ */
	/* 8 normal colors */
    /*
	"#0c0c0c", // Black
	"#c50f1f", // Red
	"#13a10e", // Green
	"#c19c00", // Yellow
	"#0037da", // Blue
	"#881798", // Purple
	"#3a96dd", // Cyan
	"#cccccc", // White
    */

	/* 8 bright colors */
    /*
	"#767676", // brightBlack
	"#e74856", // brightRed
	"#16c60c", // brightGreen
	"#f9f1a5", // brightYellow
	"#3b78ff", // brightBlue
	"#b4009e", // brightPurple
	"#61d6d6", // brightCyan
	"#f2f2f2", // brightWhite
    */
    /* }}} */
	/* MS Windows Terminal Theme: One Half Dark {{{ */
	/* 8 normal colors */
	"#282c34", // Black
	"#e06c75", // Red
	"#98c379", // Green
	"#e5c07b", // Yellow
	"#5fb0e6", // Blue
	"#c678dd", // Purple
	"#56b6c2", // Cyan
	"#dcdfe4", // White

	/* 8 bright colors */
	"#5a6374", // brightBlack
	"#e06c75", // brightRed
	"#98c379", // brightGreen
	"#e5c07b", // brightYellow
	"#5fb0e6", // brightBlue
	"#c678dd", // brightPurple
	"#56b6c2", // brightCyan
	"#dcdfe4", // brightWhite
    /* }}} */
	/* 8 normal colors */
	/* Original ST colors
	"black",
	"red3",
	"green3",
	"yellow3",
	"blue2",
	"magenta3",
	"cyan3",
	"gray90",
	*/

	/* 8 bright colors */
	/*
	"gray50",
	"red",
	"green",
	"yellow",
	"#5c5cff",
	"magenta",
	"cyan",
	"white",
	*/

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#cccccc",
	"#555555",
    "#DCDFE4", // Colour for: Foreground (258) - One Half Dark
    "#282C34", // Colour for: Background (259)
    "#FFFFFF", // Colour for: Cursor color (260)
    "#FFFFFF" // Colour for: Selection background (261)

    /*
    "#C0C0C0", // Colour for: Foreground (258)
    "#000000", // Colour for: Background (259)
    "#FFFFFF", // Colour for: Cursor color (260)
    "#FFFFFF", // Colour for: Selection background (261)
    */
    // "#012456" // Background colour: Campbell Powershell (258)
};

