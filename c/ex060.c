#include<stdio.h>
main()
{
	char data[20] = "Language";
	int i;
	char *p_data;
	char moji;
	printf("data[] = Language\nŒŸõ•¶š‚ÍH ");
	scanf("%c", &moji);

	printf("ŒŸõŒ‹‰Ê‚ÍA");
	for (p_data = data,i = 1; *p_data != '\0'; i++)
	{
		if (moji == *p_data)
		{
			printf(" %d ", i);
		}
		*p_data++;
	}
	printf("•¶š–Ú‚Å‚·");
}