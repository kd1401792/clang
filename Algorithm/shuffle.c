#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, data[20], target, work;
	for (i = 0; i < 20; i++)
	{
		data[i] = i + 1;
		printf("data[%d]=%d\n", i,data[i]);
	}
	srand(time(0));
	for (i = 0; i < 20; i++)
	{
		target = rand() % 20;
		printf("%d”Ô–Ú‚Æ%d”Ô–Ú‚Ì“ü‚ê‘Ö‚¦\n", i, target);
		work = data[i];
		data[i] = data[target];
		data[target] = work;
		printf("data[%d]=%d\tdata[%d]=%d\n", i,data[i],target,data[target]);
	}
}