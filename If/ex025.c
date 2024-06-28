#include<stdio.h>
main()
{
	char m1;
	printf("文字を入力: ");
	scanf("%c", &m1);
	if (m1 >= '0' && m1 <= '9')
	{
		printf("数字です");
	}
	else if (m1 >= 'A' && m1 <= 'Z')
	{
		printf("アルファベットです");
	}
	else if (m1 >= 'a' && m1 <= 'z')
	{
		printf("アルファベットです");
	}
	else
	{
		printf("その他の文字です");
	}
}