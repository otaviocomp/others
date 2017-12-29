#include <stdio.h>

int main()
{
	int status;
	int d1, d2;
	for(status = 1; status <= 50; status++)
	{
		printf("\t\rProcessando: [");
		for(d1 = 1; d1 <= status; d1++)
			printf("#");
		for(d1 = (status + 1); d1 <= 100; d1++)
			printf(" ");
		printf("]");
		fflush(stdout);
		for(d1 = 1; d1 <= 6500; d1++)	
			for(d2 = 1; d2 <= 6500; d2++);	
	}
	printf("\nFinalizado!\n");
}
