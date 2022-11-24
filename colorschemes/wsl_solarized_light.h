/* Theme name: WSL Solarized Light */
static const char *colorname[] = {

    "#002B36", // black
    "#DC322F", // red
    "#859900", // green
    "#B58900", // yellow
    "#268BD2", // blue
    "#D33682", // purple
    "#2AA198", // cyan
    "#EEE8D5", // white

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

    "#657B83", // foreground
    "#FDF6E3", // background
    "#002B36", // cursorColor
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
