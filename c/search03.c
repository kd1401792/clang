#include<stdio.h>
main()
{
	int d[] = { 10,15,18,23,28,35,47,55,68,78,96 };
	int s, low, mid, high;
	mid = 0;
	printf("探査値sを入力 ");
	scanf("%d", &s);
	for (low = 0, high = 10; low <= high; mid = (low + high) / 2)
	{
		if (s == d[mid])break;
		if (s > d[mid])
		{
			low = mid + 1;
		}
		if (s < d[mid])
		{
			high = mid - 1;
		}
	}
	if (low > high)
	{
		printf("見つからなかった");
	}
	else
	{
		printf("%d", mid);
	}
}