#include<stdio.h>
main()
{
	int num, i;
	printf("”‚Í? ");
	scanf("%d", &num);
	do
	{
		num--;
		i = 5;
		do
		{
			i--;
			printf("*");
		} while (i > 0);
		printf("\n");
	} while (num > 0);
}