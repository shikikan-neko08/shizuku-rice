const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1f2129", /* black   */
  [1] = "#9EB5C8", /* red     */
  [2] = "#A8C7D8", /* green   */
  [3] = "#BBDFEF", /* yellow  */
  [4] = "#BAE1F3", /* blue    */
  [5] = "#DAC0C1", /* magenta */
  [6] = "#D1CCD6", /* cyan    */
  [7] = "#e9e7e7", /* white   */

  /* 8 bright colors */
  [8]  = "#a3a1a1",  /* black   */
  [9]  = "#9EB5C8",  /* red     */
  [10] = "#A8C7D8", /* green   */
  [11] = "#BBDFEF", /* yellow  */
  [12] = "#BAE1F3", /* blue    */
  [13] = "#DAC0C1", /* magenta */
  [14] = "#D1CCD6", /* cyan    */
  [15] = "#e9e7e7", /* white   */

  /* special colors */
  [256] = "#1f2129", /* background */
  [257] = "#e9e7e7", /* foreground */
  [258] = "#e9e7e7",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
