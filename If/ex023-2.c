#include<stdio.h>
main()
{
	int y;
	printf("西暦を入力 : ");
	scanf("%d", &y);
	if (y % 400 == 0)
	{
		printf("うるう年です");
	}
	else if (y % 4)
	{
		if (y % 100)
		{
			printf("うるう年です");
		}
		else
		{
			printf("平成");
		}
	}
	else
	{
		printf("平成");
	}
}