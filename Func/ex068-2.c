#include<stdio.h>
main()
{
	char dumy[256];
	char* cp;
	printf("文字列入力> ");
	cp = gets(dumy);

	while (cp != NULL)
	{
		printf("入力されたのは%s\n", cp);
		printf("文字列入力>");
		cp = gets(dumy);
	}
}