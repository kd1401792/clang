#include<stdio.h>
main()
{
	FILE* fp;
	char str[256];
	fp = fopen("file02.txt", "r");
	fscanf(fp, "%s", str);
	printf("str:%s\n", str);
	fclose(fp);
}