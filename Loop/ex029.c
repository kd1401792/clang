#include<stdio.h>
main()
{
	int no, count;
	count = 0;
	printf("数を入れて : ");
	scanf("%d", &no);
	while (count < no)
	{
		count += 1;
		printf("*");
	}
}