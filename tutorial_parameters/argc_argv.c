#include <stdio.h>

int main(int argc, char** argv)
{
	int i;
	printf("value of argc: %d\n", argc);
	for(i = 0; i < argc; i++)
		printf("content of argv[argc %d]: %s\n", i, argv[i]);
}		
