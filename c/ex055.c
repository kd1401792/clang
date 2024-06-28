#include<stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 };
	float b[] = { 11.1,22.2,33.3,44.4};
	int *p_a;
	float *p_b;
	
	float sum, ave;
	int i;

	sum = 0;
	p_a = a;
	for (i=0; i<6; i++)
	{
		sum += *p_a;
		p_a++;
	}
	ave = sum / i;
	printf("配列a\t合計 =\t%d\t平均 = %.3f\n", (int)sum, ave);

	sum = 0;
	p_b = b;
	for (i = 0; i<4; i++)
	{
		sum += *p_b;
		p_b++;
	}
	ave = sum / i;
	printf("配列b\t合計 =\t%.3f\t平均 = %.3f", sum, ave);
}