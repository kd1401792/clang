#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int c,i;
	srand(time(0));
	rand();
	rand();
	c = rand() % (5 - 1 + 1) + 1;
	printf("今日のあなたの運勢は");
	for (i = 0; i < c; i++)
	{
		printf("☆");
	}
	printf(" です");
}