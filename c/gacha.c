#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int r,i;
	srand(time(0));
	rand();
	

	for (i = 0; i <= 20; i++)
	{
		rand();
		r = rand() % 100 + 1;
		if (r >= 50)
		{
			printf("šƒm[ƒ}ƒ‹\n");
		}
		if (r >= 20 && r <= 49)
		{
			printf("ššƒŒƒA\n");
		}
		if (r >= 6 && r <= 19)
		{
			printf("šššSR\n");
		}
		if (r >= 2 && r <= 5)
		{
			printf("ššššUR\n");
		}
		if (r == 1)
		{
			printf("šššššLR\n");
		}
	}
}