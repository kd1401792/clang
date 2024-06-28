#include<stdio.h>
void calculate(int x, int y,int *s,float *a);
main()
{
	int a, b, c;
	float d;
	printf("®”‚ğ2‚Â“ü—Í: ");
	scanf("%d%d", &a, &b);
	calculate(a, b, &c, &d);
	printf("‡Œv‚Í%dA•½‹Ï‚Í%.2f", c, d);
}

void calculate(int x, int y, int* s, float* a)
{
	*s = x + y;
	*a = *s/2;
	return;
}