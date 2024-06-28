#include<stdio.h>
main()
{
	int num;
	printf("整数を入力: ");
	scanf("%d", &num);
	if (num >= 10 && num <= 49)
	{
		switch (num / 10)
		{
		case 1:
			printf("10点台");
			break;
		case 2:
			printf("20点台");
			break;
		case 3:
			printf("30点台");
			break;
		case 4:
			printf("40点台");
		}
	}
	else
	{
		printf("ERROR");
	}
}