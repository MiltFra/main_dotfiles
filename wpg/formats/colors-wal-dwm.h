static const char norm_fg[] = "#f5ffe4";
static const char norm_bg[] = "#12211c";
static const char norm_border[] = "#1f3b32";

static const char sel_fg[] = "#f5ffe4";
static const char sel_bg[] = "#56624d";
static const char sel_border[] = "#f5ffe4";

static const char urg_fg[] = "#f5ffe4";
static const char urg_bg[] = "#bc4032";
static const char urg_border[] = "#bc4032";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
