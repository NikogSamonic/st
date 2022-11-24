/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#000000",
	"#CC0000",
	"#4E9A06",
	"#C4A000",
	"#3465A4",
	"#75507B",
	"#75507B",
	"#D3D7CF",

	/* 8 bright colors */
	"#555753",
	"#EF2929",
	"#8AE234",
	"#FCE94F",
	"#729FCF",
	"#AD7FA8",
	"#34E2E2",
	"#EEEEEC",

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#cccccc",
	"#555555",
    "#D3D7CF", // Foreground (258)
    "#000000", // Background (259)
    "#FFFFFF", // Cursor color (260)
    "#FFFFFF"  // Selection background (261)
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 7;
unsigned int defaultbg = 0;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
