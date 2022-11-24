/* Theme name: WSL Campbell */
static const char *colorname[] = {

    "#0C0C0C", // black
    "#C50F1F", // red
    "#13A10E", // green
    "#C19C00", // yellow
    "#0037DA", // blue
    "#881798", // purple
    "#3A96DD", // cyan
    "#CCCCCC", // white

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

    "#CCCCCC", // foreground
    "#0C0C0C", // background
    "#FFFFFF", // cursorColor
    "#FFFFFF"  // selectionBackground
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 258;
unsigned int defaultbg = 259;
static unsigned int defaultcs = 260;
static unsigned int defaultrcs = 261;
