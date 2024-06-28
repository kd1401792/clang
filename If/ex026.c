#include<stdio.h>
main()
{
	int m;
	printf("ŒŽ‚ð“ü—Í : ");
	scanf("%d", &m);
	if (m >= 1 && m <= 12)
	{
		if (m == 2)
		{
			printf("ÅI“ú‚Í28“ú‚Å‚·");
		}
		if (m == 4 || m == 6 || m == 9 || m == 11)
		{
			printf("ÅI“ú‚Í30“ú‚Å‚·");
		}
		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
		{
			printf("ÅI“ú‚Í31“ú‚Å‚·");
		}
	}
	else
	{
		printf("–³Œø‚È”Žš‚Å‚·");
	}
}