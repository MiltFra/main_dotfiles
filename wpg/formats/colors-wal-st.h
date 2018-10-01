const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#03091D", /* black   */
  [1] = "#BB4B38", /* red     */
  [2] = "#469661", /* green   */
  [3] = "#9F6356", /* yellow  */
  [4] = "#1D3153", /* blue    */
  [5] = "#5A5F60", /* magenta */
  [6] = "#245563", /* cyan    */
  [7] = "#d2c6a9", /* white   */

  /* 8 bright colors */
  [8]  = "#051342",  /* black   */
  [9]  = "#ff5638",  /* red     */
  [10] = "#4cd179", /* green   */
  [11] = "#de765f", /* yellow  */
  [12] = "#1e3d73", /* blue    */
  [13] = "#698388", /* magenta */
  [14] = "#257389", /* cyan    */
  [15] = "#ffffde", /* white   */

  /* special colors */
  [256] = "#03091D", /* background */
  [257] = "#ffffde", /* foreground */
  [258] = "#ffffde",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
