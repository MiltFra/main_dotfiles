static const char norm_fg[] = "#ecf9fa";
static const char norm_bg[] = "#0a0909";
static const char norm_border[] = "#1f1b1b";

static const char sel_fg[] = "#ecf9fa";
static const char sel_bg[] = "#57696B";
static const char sel_border[] = "#ecf9fa";

static const char urg_fg[] = "#ecf9fa";
static const char urg_bg[] = "#936E50";
static const char urg_border[] = "#936E50";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
