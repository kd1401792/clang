#include<stdio.h>
main()
{
	int num, i, a;
	printf("”‚Í? ");
	scanf("%d", &num);
	a = num;
	do
	{
		i = a;
		num--;
		do
		{
			printf("*");
			i--;
		} while (i > num);
		printf("\n");
	} while (num > 0);
}