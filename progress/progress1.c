#include <stdio.h>

int main()
{
	int status;
	long int d1, d2;
	for(status = 1; status <= 100; status++)
	{
		printf("\rProcessando - %u%%", status);
		for(d1 = 1; d1 <= 6500; d1++)
			for(d2 = 1; d2 <= 6500; d2++);
	}
	printf("\nFinalizado!\n");
}
