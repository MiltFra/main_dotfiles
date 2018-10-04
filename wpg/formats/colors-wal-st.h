const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0C0312", /* black   */
  [1] = "#59586B", /* red     */
  [2] = "#364D69", /* green   */
  [3] = "#908773", /* yellow  */
  [4] = "#395B88", /* blue    */
  [5] = "#8B7391", /* magenta */
  [6] = "#5D688D", /* cyan    */
  [7] = "#abbfc5", /* white   */

  /* 8 bright colors */
  [8]  = "#230735",  /* black   */
  [9]  = "#686597",  /* red     */
  [10] = "#3b6392", /* green   */
  [11] = "#cbb584", /* yellow  */
  [12] = "#3d74bd", /* blue    */
  [13] = "#be84cd", /* magenta */
  [14] = "#697ec6", /* cyan    */
  [15] = "#e2fdff", /* white   */

  /* special colors */
  [256] = "#0C0312", /* background */
  [257] = "#e2fdff", /* foreground */
  [258] = "#e2fdff",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
