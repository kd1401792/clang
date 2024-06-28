#include<stdio.h>
main()
{
	int num, i, i2, a;
	printf("”‚Í? ");
	scanf("%d", &num);
	a = num;
	i2 = a;
	do
	{
		i2 = num;
		i = a;
		num--;
		do
		{
			i2--;
			printf(" ");
		} while (i2 >= 0);

		do
		{
			printf("*");
		    i--;
		} while (i > num);
		printf("\n");

	} while (num > 0);
}