#include<stdio.h>
void calculate(int x, int y,int *s,float *a);
main()
{
	int a, b, c;
	float d;
	printf("整数を2つ入力: ");
	scanf("%d%d", &a, &b);
	calculate(a, b, &c, &d);
	printf("合計は%d、平均は%.2f", c, d);
}

void calculate(int x, int y, int* s, float* a)
{
	*s = x + y;
	*a = *s/2;
	return;
}