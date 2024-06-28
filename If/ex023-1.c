#include<stdio.h>
main()
{
	int time;
	printf("秒数を入力 : ");
	scanf("%d", &time);
	if (time > 0)
	{
		if (time <= 5000)
		{
			printf("%d時間 %d 分 %d 秒 ", time / 60 / 60, time % 60, time % 60 % 60);
		}
		else
		{
			printf("入力値は5000までです");
		}
	}
	else
	{
		printf("マイナスは入力できません");
	}
}