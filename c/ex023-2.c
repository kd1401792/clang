#include<stdio.h>
main()
{
	int y;
	printf("¼—ï‚ğ“ü—Í : ");
	scanf("%d", &y);
	if (y % 400 == 0)
	{
		printf("‚¤‚é‚¤”N‚Å‚·");
	}
	else if (y % 4)
	{
		if (y % 100)
		{
			printf("‚¤‚é‚¤”N‚Å‚·");
		}
		else
		{
			printf("•½¬");
		}
	}
	else
	{
		printf("•½¬");
	}
}