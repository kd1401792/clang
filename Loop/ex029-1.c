#include<stdio.h>
main()
{
	int num, count;
	printf("数を入れて : ");
	scanf("%d", &num);
	count = num;
	while (count > 0)
	{
		printf("*");
		count -= 1;
	}
}