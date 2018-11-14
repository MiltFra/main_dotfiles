const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0d0f0f", /* black   */
  [1] = "#81817D", /* red     */
  [2] = "#5A8F76", /* green   */
  [3] = "#ABB5B1", /* yellow  */
  [4] = "#71968B", /* blue    */
  [5] = "#90A29B", /* magenta */
  [6] = "#60C493", /* cyan    */
  [7] = "#ccdbd3", /* white   */

  /* 8 bright colors */
  [8]  = "#1f2424",  /* black   */
  [9]  = "#b8b892",  /* red     */
  [10] = "#65c99a", /* green   */
  [11] = "#c7ffea", /* yellow  */
  [12] = "#81d4bb", /* blue    */
  [13] = "#a7e6cd", /* magenta */
  [14] = "#69ffbf", /* cyan    */
  [15] = "#f5fffe", /* white   */

  /* special colors */
  [256] = "#0d0f0f", /* background */
  [257] = "#f5fffe", /* foreground */
  [258] = "#f5fffe",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
