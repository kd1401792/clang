#include<stdio.h>
int add(int a, int b);
main()
{
	int a, b, gokei;
	printf("整数を２つ入力: ");
	scanf("%d%d", &a, &b);
	gokei = add(a, b);
	printf("合計は%dです\n", gokei);
}

int add(int a, int b)
{
	int ans;
	ans = a + b;
	return(ans);
}