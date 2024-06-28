#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int c;
	srand(time(0));
	rand();
	rand();
	c = rand() % (100 - 1 + 1) + 1;
	if (c < 31)
	{
		printf("‰ïS‚ÌˆêŒ‚");
	}
	else
	{
		printf("’ÊíUŒ‚");
	}
}