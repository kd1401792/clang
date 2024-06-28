#include<stdio.h>
main()
{
	int sum, num;
	sum = 0;
	do
	{
		printf("”‚ğ“ü‚ê‚Ä : ");
		scanf("%d", &num);
		if (num == -999) break;
		sum += num;
	} while (1);
	printf("‡Œv= %d", sum);
}