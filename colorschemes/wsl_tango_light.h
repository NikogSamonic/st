/* Theme name: WSL Tango Light */
static const char *colorname[] = {

    "#000000", // black
    "#CC0000", // red
    "#4E9A06", // green
    "#C4A000", // yellow
    "#3465A4", // blue
    "#75507B", // purple
    "#06989A", // cyan
    "#D3D7CF", // white

    "#555753", // brightBlack
    "#EF2929", // brightRed
    "#8AE234", // brightGreen
    "#FCE94F", // brightYellow
    "#729FCF", // brightBlue
    "#AD7FA8", // brightPurple
    "#34E2E2", // brightCyan
    "#EEEEEC", // brightWhite

    [255] = 0,
    /* more colors can be added after 255 to use with DefaultXX */
    "#cccccc",
    "#555555",

    "#555753", // foreground
    "#FFFFFF", // background
    "#000000", // cursorColor
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
