#include<stdio.h>
main()
{
	int a, sum, i;
	for (sum = 0, i = 0, a = 0; a != -999; i++)
	{
		sum += a;
		printf("”‚ÍH ");
		scanf("%d", &a);
	}
	i = i - 1;
	printf("‡Œv= %d\t•½‹Ï= %.2f", sum, (float)sum / i);
}