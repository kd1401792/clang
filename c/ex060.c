#include<stdio.h>
main()
{
	char data[20] = "Language";
	int i;
	char *p_data;
	char moji;
	printf("data[] = Language\n検索文字は？ ");
	scanf("%c", &moji);

	printf("検索結果は、");
	for (p_data = data,i = 1; *p_data != '\0'; i++)
	{
		if (moji == *p_data)
		{
			printf(" %d ", i);
		}
		*p_data++;
	}
	printf("文字目です");
}