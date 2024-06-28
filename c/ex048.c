#include<stdio.h>
main()
{
	int a[2][2][3] ={{ {3,4,5},{4,5,6} }, { {2,2,3},{2,5,6} }};
	int gokei, i, j, n;
	gokei = 0;

	for (i = 0; i < 2; i++)
	{
		printf("アパート%d ", i + 1);
		for (j = 0; j < 2; j++)
		{
			printf("(%d階)", j + 1);
			for (n = 0; n < 3; n++)
			{
				printf("%d ", a[i][j][n]);
				gokei += a[i][j][n];
			}
		}
		printf("\n");
	}
	printf("全体で%d人住んでいます",gokei);
}