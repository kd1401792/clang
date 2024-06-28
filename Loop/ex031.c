#include<stdio.h>
main()
{
	int a;
	a = 1;
	while (a <= 10)
	{
		printf("1‚©‚ç%d‚Ü‚Å‚Ì˜a%d\n", a, (a + 1) * a / 2);
		a += 1;
	}
/*	for (a = 1; a <= 10; a++)
	{
		printf("1‚©‚ç%d‚Ü‚Å‚Ì˜a%d\n", a, (a + 1) * a / 2);
	}
*/
}