#include<stdio.h>
main()
{
	char data[] = "orange";
	int i;
	printf("文字列: ");
	for (i = 0; data[i]!='\0'; i++)
	{
		printf("%c", data[i]);
	}
	printf("\n");
	printf("文字数は%d文字", i);
}