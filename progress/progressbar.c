#include <stdio.h>

#define GREEN 	    "\033[32m"
#define BOLD_GREEN  "\033[1;32m"
#define BLINK		"\033[5m"
#define YELLOW 		"\033[33m"
#define RESET  		"\033[0m"

int main()
{
	int status;
	int d1, d2;
	for(status = 1; status <= 50; status++)
	{
		printf("\t\r" GREEN "Processando:" RESET "[");
		for(d1 = 0; d1 <= status; d1++)
			printf("=");
		printf(YELLOW ">" RESET);	
		for(d1 = (status + 1); d1 <= 50; d1++)
			printf(" ");
		printf("]");
		fflush(stdout);
		for(d1 = 1; d1 <= 6500; d1++)	
			for(d2 = 1; d2 <= 6500; d2++);	
	}
	printf("\n\n" BOLD_GREEN BLINK "Finalizado!" RESET "\n\n");
}
