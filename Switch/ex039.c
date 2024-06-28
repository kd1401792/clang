#include<stdio.h>
main()
{
	char flg;
	int d1, d2, d3;
	printf("処理を入力 : ");
	scanf("%c", &flg);
	printf("整数を入力 : ");
	scanf("%d%d%d", &d1, &d2, &d3);
	switch (flg)
	{
	case 'd':
	case 'D':
		if (d1 > d2)
		{
			if (d1 > d3)
			{
				printf("最大値は%dです", d1);
			}
			else
				printf("最大値は%dです", d3);
			if (d2 > d3)
			{
				printf("最大値は%dです", d2);
			}
			else
			{
				printf("最大値は%dです", d2);
			}
		}
	case 's':
	case 'S':
		if (d1 < d2)
		{
			if (d1 < d3)
			{
				printf("最小値は%dです", d1);
			}
			else
				printf("最小値は%dです", d3);
			if (d2 < d3)
			{
				printf("最小値は%dです", d2);
			}
			else
			{
				printf("最小値は%dです", d2);
			}
		}
	case 'g':
	case 'G':
		printf("合計は%dです", d1 + d2 + d3);
	case 'h':
	case 'H':
		printf("平均は%.2fです", ((float)d1 + (float)d2 + (float)d3) / 3);
	}
}