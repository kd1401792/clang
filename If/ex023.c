#include<stdio.h>
main()
{
	int time;
	printf("秒数を入力 : ");
	scanf("%d", &time);
	if (time <= 5000) {
		printf("%d時間%d分%d秒", time / 3600, time % 3600 / 60, time % 3600 % 60);
	}
	else {
		printf("error");
	}
}