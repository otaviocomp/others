#ifndef AES_H
#define AES_H

/*this is a header with the ANSI Escape sequences*/
/*more information at http://ascii-table.com/ansi-escape-sequences.php*/


//Text attributes

#define RESET 		"\033[0m" 	//All attributes off
#define BOLD  		"\033[1m"
#define UNDERSCORE  "\033[4m"
#define BLINK		"\033[5m"
#define REVERSE  	"\033[7m"
#define CONCEALED 	"\033[8m"


//colors

#define BLACK 		"\033[30m"
#define RED   		"\033[31m"
#define GREEN 		"\033[32m"
#define YELLOW 		"\033[33m"
#define BLUE 		"\033[34m"
#define MAGENTA 	"\033[35m"
#define CYAN 		"\033[36m"
#define WHITE 		"\033[37m"


//Background colors

#define B_BLACK 	"\033[40m"
#define B_RED   	"\033[41m"
#define B_GREEN 	"\033[42m"
#define B_YELLOW 	"\033[43m"
#define B_BLUE 		"\033[44m"
#define B_MAGENTA 	"\033[45m"
#define B_CYAN 		"\033[46m"
#define B_WHITE 	"\033[47m"

#endif
