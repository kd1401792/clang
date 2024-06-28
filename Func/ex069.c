#include<stdio.h>
main()
{
	int a, ret, cnt = 0;
	float k = 0;
	printf("®”: ");
	for (; scanf("%d", &a) != EOF;)
	{
		k += a;
		cnt++;
		printf("®”: ");
	}

	/*printf("®”: ");
	ret = scanf("%d", &a);
	while (ret != EOF)
	{
		k += a;
		cnt++;
		printf("®”: ");
		ret = scanf("%d", &a);
	}*/
	printf("‡Œv= %d,•½‹Ï= %d", k, k / cnt);
}