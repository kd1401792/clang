#include<stdio.h>
main()
{
	int sum, num;
	sum = 0;
	do
	{
		printf("数を入れて : ");
		scanf("%d", &num);
		if (num == -999) break;
		sum += num;
	} while (1);
	printf("合計= %d", sum);
}