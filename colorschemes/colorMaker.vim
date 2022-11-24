:set paste
gg0/\<blackddGpgg0
/\<redddGpgg0
/\<greenddGpgg0
/\<yellowddGpgg0
/\<blueddGpgg0
/\<purpleddGpgg0
/\<cyanddGpgg0
/\<whiteddGpogg0
/\<brightBlackddGpgg0
/\<brightRedddGpgg0
/\<brightGreenddGpgg0
/\<brightYellowddGpgg0
/\<brightBlueddGpgg0
/\<brightPurpleddGpgg0
/\<brightCyanddGpgg0
/\<brightWhiteddGpo
[255] = 0,
/* more colors can be added after 255 to use with DefaultXX */
"#cccccc",
"#555555",
gg0
/\<foregroundddGpgg0
/\<backgroundddGpgg0
/\<cursorColorddGpgg0
/\<selectionBackgroundddGpgg0
ggVG:s#^\s*##g
gg0:s#^"name":\s"\(.\+\)",$#\/\*\ Theme name: WSL \1\ \*\/#g
ggVG:s#"\(\w\+\)"\:\s\("\#[a-fA-F0-9]\{6\}"\).*$#\2,\ \/\/\ \1#g
G0f,R o};
/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 258;
unsigned int defaultbg = 259;
static unsigned int defaultcs = 260;
static unsigned int defaultrcs = 261;gg
Ostatic const char *colorname[] = {:set nopaste=G
