static const char norm_fg[] = "#d8ffff";
static const char norm_bg[] = "#04142D";
static const char norm_border[] = "#062452";

static const char sel_fg[] = "#d8ffff";
static const char sel_bg[] = "#246E8D";
static const char sel_border[] = "#d8ffff";

static const char urg_fg[] = "#d8ffff";
static const char urg_bg[] = "#5AA5B1";
static const char urg_border[] = "#5AA5B1";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
