const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#12211c", /* black   */
  [1] = "#bc4032", /* red     */
  [2] = "#56624d", /* green   */
  [3] = "#a07765", /* yellow  */
  [4] = "#3a5a56", /* blue    */
  [5] = "#7d7b56", /* magenta */
  [6] = "#72775e", /* cyan    */
  [7] = "#baccad", /* white   */

  /* 8 bright colors */
  [8]  = "#1f3b32",  /* black   */
  [9]  = "#ff4631",  /* red     */
  [10] = "#6e8a58", /* green   */
  [11] = "#e09472", /* yellow  */
  [12] = "#417e76", /* blue    */
  [13] = "#b0ac62", /* magenta */
  [14] = "#9ca86c", /* cyan    */
  [15] = "#f5ffe4", /* white   */

  /* special colors */
  [256] = "#12211c", /* background */
  [257] = "#f5ffe4", /* foreground */
  [258] = "#f5ffe4",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
