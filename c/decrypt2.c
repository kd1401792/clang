#include<stdio.h>
main()
{
	int i,num;
	char s[20];
	printf("文字列を入力してください> ");
	scanf("%s", &s[0]);
	for (i = 0; i < 5; i++)
	{
		printf("s[%d]の復号化キー> ",i);
		scanf("%d", &num);
		s[i] -= num;
	}
	printf("復号化済み文字列は、%s", &s[0]);
}