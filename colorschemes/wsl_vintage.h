/* Theme name: WSL Vintage */
static const char *colorname[] = {
    "#000000", // black
    "#800000", // red
    "#008000", // green
    "#808000", // yellow
    "#000080", // blue
    "#800080", // purple
    "#008080", // cyan
    "#C0C0C0", // white

    "#808080", // brightBlack
    "#FF0000", // brightRed
    "#00FF00", // brightGreen
    "#FFFF00", // brightYellow
    "#0000FF", // brightBlue
    "#FF00FF", // brightPurple
    "#00FFFF", // brightCyan
    "#FFFFFF", // brightWhite

    [255] = 0,
    /* more colors can be added after 255 to use with DefaultXX */
    "#cccccc",
    "#555555",

    "#C0C0C0", // foreground
    "#000000", // background
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
