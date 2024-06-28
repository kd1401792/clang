#include<stdio.h>
int add(int a, int b);
main()
{
	int a, b, gokei;
	printf("®”‚ğ‚Q‚Â“ü—Í: ");
	scanf("%d%d", &a, &b);
	gokei = add(a, b);
	printf("‡Œv‚Í%d‚Å‚·\n", gokei);
}

int add(int a, int b)
{
	int ans;
	ans = a + b;
	return(ans);
}