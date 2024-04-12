/*https://github.com/aquaverso2077*/
static const char *colorname[] = {
	/* 8 normal colors */
	[0] = "#222D31", /* black   */
	[1] = "#ab4642", /* red     */
	[2] = "#7E807E", /* green   */
	[3] = "#f7ca88", /* yellow  */
	[4] = "#7CAFC2", /* blue    */
	[5] = "#ba8baf", /* magenta */
	[6] = "#1ABB9B", /* cyan    */
	[7] = "#d8d8d8", /* white   */

	/* 8 bright colors */
	[8]  = "#585858", /* black   */
	[9]  = "#ab4642", /* red     */
	[10] = "#8D8F8D", /* green   */
	[11] = "#f7ca88", /* yellow  */
	[12] = "#7cafc2", /* blue    */
	[13] = "#ba8baf", /* magenta */
	[14] = "#1ABB9B", /* cyan    */
	[15] = "#f8f8f8", /* white   */
};
/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 15;
unsigned int defaultbg = 0;
unsigned int defaultcs = 14;
static unsigned int defaultrcs = 257;
