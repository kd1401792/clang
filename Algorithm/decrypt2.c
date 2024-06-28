#include<stdio.h>
main()
{
	int i,num;
	char s[20];
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢> ");
	scanf("%s", &s[0]);
	for (i = 0; i < 5; i++)
	{
		printf("s[%d]‚Ì•œ†‰»ƒL[> ",i);
		scanf("%d", &num);
		s[i] -= num;
	}
	printf("•œ†‰»Ï‚İ•¶š—ñ‚ÍA%s", &s[0]);
}