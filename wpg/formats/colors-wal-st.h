const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#04142D", /* black   */
  [1] = "#5AA5B1", /* red     */
  [2] = "#246E8D", /* green   */
  [3] = "#EAAE78", /* yellow  */
  [4] = "#196C8A", /* blue    */
  [5] = "#5F6F88", /* magenta */
  [6] = "#2D94A9", /* cyan    */
  [7] = "#a5d1da", /* white   */

  /* 8 bright colors */
  [8]  = "#062452",  /* black   */
  [9]  = "#63e3f7",  /* red     */
  [10] = "#2393c2", /* green   */
  [11] = "#ffe084", /* yellow  */
  [12] = "#1591be", /* blue    */
  [13] = "#6c8dbf", /* magenta */
  [14] = "#2cc9e9", /* cyan    */
  [15] = "#d8ffff", /* white   */

  /* special colors */
  [256] = "#04142D", /* background */
  [257] = "#d8ffff", /* foreground */
  [258] = "#d8ffff",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
