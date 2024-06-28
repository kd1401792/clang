#include<stdio.h>
int result(char moji);
main()
{
	int r;
	char moji;
	printf("アルファベット1文字? > ");
	scanf("%c", &moji);
	r = result(moji);
	if (r = 0)
	{
		printf("戻り値は、%dなので入力した文字は、小文字です", r);
	}
	if (r = 1)
	{
		printf("戻り値は、%dなので入力した文字は、大文字です",r);
	}
}

int result(char moji)
{
	int i;
	if (moji <= 'Z' && moji >= 'A')
	{
		i = 1;
	}
	else if (moji <= 'z' && moji >= 'a')
	{
		i = 0;
	}
	return (i);
}