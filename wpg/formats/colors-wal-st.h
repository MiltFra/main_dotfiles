const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0a0909", /* black   */
  [1] = "#936E50", /* red     */
  [2] = "#57696B", /* green   */
  [3] = "#BB956E", /* yellow  */
  [4] = "#677986", /* blue    */
  [5] = "#6D7170", /* magenta */
  [6] = "#70817E", /* cyan    */
  [7] = "#b2bcbd", /* white   */

  /* 8 bright colors */
  [8]  = "#1f1b1b",  /* black   */
  [9]  = "#cd8d59",  /* red     */
  [10] = "#649297", /* green   */
  [11] = "#ffc17b", /* yellow  */
  [12] = "#769fbd", /* blue    */
  [13] = "#7fa198", /* magenta */
  [14] = "#82b7ad", /* cyan    */
  [15] = "#ecf9fa", /* white   */

  /* special colors */
  [256] = "#0a0909", /* background */
  [257] = "#ecf9fa", /* foreground */
  [258] = "#ecf9fa",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
