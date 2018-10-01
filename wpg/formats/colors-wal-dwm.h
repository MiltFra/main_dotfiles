static const char norm_fg[] = "#ffffde";
static const char norm_bg[] = "#03091D";
static const char norm_border[] = "#051342";

static const char sel_fg[] = "#ffffde";
static const char sel_bg[] = "#469661";
static const char sel_border[] = "#ffffde";

static const char urg_fg[] = "#ffffde";
static const char urg_bg[] = "#BB4B38";
static const char urg_border[] = "#BB4B38";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
