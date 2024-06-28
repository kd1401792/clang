#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int dice, i,a[3];
	srand(time(0));
	for (i = 0; i < 10; i++)
	{
		a[0] = rand() % 99; //0~99
		a[1] = rand() % (50 - 10 + 1) + 10; //10~50
		a[2] = rand() % (200 + 100 + 1) - 100; //-100~+200
		printf("%d %d %d\n", a[0],a[1],a[2]);

	}

}