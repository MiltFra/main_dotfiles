static const char norm_fg[] = "#f5fffe";
static const char norm_bg[] = "#0d0f0f";
static const char norm_border[] = "#1f2424";

static const char sel_fg[] = "#f5fffe";
static const char sel_bg[] = "#5A8F76";
static const char sel_border[] = "#f5fffe";

static const char urg_fg[] = "#f5fffe";
static const char urg_bg[] = "#81817D";
static const char urg_border[] = "#81817D";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
