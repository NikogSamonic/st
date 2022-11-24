/* Theme name: WSL One Half Dark */
static const char *colorname[] = {

    "#282C34", // black
    "#E06C75", // red
    "#98C379", // green
    "#E5C07B", // yellow
    "#61AFEF", // blue
    "#C678DD", // purple
    "#56B6C2", // cyan
    "#DCDFE4", // white

    "#5A6374", // brightBlack
    "#E06C75", // brightRed
    "#98C379", // brightGreen
    "#E5C07B", // brightYellow
    "#61AFEF", // brightBlue
    "#C678DD", // brightPurple
    "#56B6C2", // brightCyan
    "#DCDFE4", // brightWhite

    [255] = 0,
    /* more colors can be added after 255 to use with DefaultXX */
    "#cccccc",
    "#555555",

    "#DCDFE4", // foreground
    "#282C34", // background
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
