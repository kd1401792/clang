#include<stdio.h>
main(int argc, char* argv[])
{
	int i;
	printf("argc = %d\n", argc);
	for (i = 0; i < argc; i++)
	{
		printf("argc[%d] = %s\n", i,argv[i]);
	}
}