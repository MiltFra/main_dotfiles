static const char norm_fg[] = "#e2fdff";
static const char norm_bg[] = "#0C0312";
static const char norm_border[] = "#230735";

static const char sel_fg[] = "#e2fdff";
static const char sel_bg[] = "#364D69";
static const char sel_border[] = "#e2fdff";

static const char urg_fg[] = "#e2fdff";
static const char urg_bg[] = "#59586B";
static const char urg_border[] = "#59586B";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
