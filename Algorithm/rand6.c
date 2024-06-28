#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a[3] = { 1,2,3 };
	int p,e;
	p = 0, e = 0;
	printf("何を出しますか?\n(1:グー 2:チョキ 3:パー)> ");
	scanf("%d", &p);
	printf("\n");

		if (p == a[0])
		{
			printf("プレイヤーは、グーです。\n");
		}
		if (p == a[1])
		{
			printf("プレイヤーは、チョキです。\n");
		}
		if (p == a[2])
		{
			printf("プレイヤーは、パーです。\n");
		}

	srand(time(0));
	e = rand() % 3 + 1;
		if (e== a[0])
		{
			printf("コンピュータは、グーです。\n");
		}
		if (e == a[1])
		{
			printf("コンピュータは、チョキです。\n");
		}
		if (e == a[2])
		{
			printf("コンピュータは、パーです。\n");
		}
		printf("\n");

	if (p == a[0])
	{
		if (e == a[0])
		{
			printf("あいこ");
		}
		if (e == a[1])
		{
			printf("プレイヤーの勝ちです");
		}
		if (e == a[2])
		{
			printf("プレイヤーの負けです");
		}
	}
	if (p == a[1])
	{
		if (e == a[0])
		{
			printf("プレイヤーの負けです");
		}
		if (e == a[1])
		{
			printf("あいこ");
		}
		if (e == a[2])
		{
			printf("プレイヤーの勝ちです");
		}
	}
	if (p == a[2])
	{
		if (e == a[0])
		{
			printf("プレイヤーの勝ちです");
		}
		if (e == a[1])
		{
			printf("プレイヤーの負けです");
		}
		if (e == a[2])
		{
			printf("あいこ");
		}
	}
}