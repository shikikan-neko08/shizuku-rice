static const char norm_fg[] = "#e9e7e7";
static const char norm_bg[] = "#1f2129";
static const char norm_border[] = "#a3a1a1";

static const char sel_fg[] = "#e9e7e7";
static const char sel_bg[] = "#A8C7D8";
static const char sel_border[] = "#e9e7e7";

static const char urg_fg[] = "#e9e7e7";
static const char urg_bg[] = "#9EB5C8";
static const char urg_border[] = "#9EB5C8";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
