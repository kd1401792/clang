#include<stdio.h>
main()
{
	int no1,no2,e,a;
	printf("演算子を入力: ");
	scanf("%d", &e);
	printf("2つの整数を入力: ");
	scanf("%d%d", &no1, &no2);
	if (e > 0)
	{
		if (e == 1)
		{
			a = no1 + no2;
		}
		if (e == 2)
		{
			a = no1 - no2;
		}
		if (e == 3)
		{
			a = no1 * no2;
		}
		if (e == 4)
		{
			a = no1 / no2;
		}
	}

	printf("%d", a);
}