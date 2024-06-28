#include<stdio.h>
main()
{
	int num, count;
	printf("”‚ð“ü‚ê‚Ä : ");
	scanf("%d", &num);
	count = num;
	while (count > 0)
	{
		printf("*");
		count -= 1;
	}
}