#include<stdio.h>
main()
{
	char moji1;
	int moji2;
	printf("文字を入力: ");
	scanf("%c", &moji1);
	moji2 = ('%c', moji1);
	if (moji2 >= 65 && moji2 <=90)
	{
		printf("大文字です");
	}
	else
	{
		printf("その他の文字です");
	}
}