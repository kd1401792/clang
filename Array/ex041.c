#include<stdio.h>
main()
{
	int i;
	float box[3], sum;
	for (sum=0, i = 0; i < 3; i++)
	{
		printf("実数を入力: ");
		scanf("%f", &box[i]);
		sum += box[i];
	}
	printf("合計は%.2fです\n平均は%.2fです",sum, sum/i);
}