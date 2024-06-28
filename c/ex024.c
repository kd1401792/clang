#include<stdio.h>
main()
{
	char moji1;
	int moji2;
	printf("•¶Žš‚ð“ü—Í: ");
	scanf("%c", &moji1);
	moji2 = ('%c', moji1);
	if (moji2 >= 65 && moji2 <=90)
	{
		printf("‘å•¶Žš‚Å‚·");
	}
	else
	{
		printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·");
	}
}