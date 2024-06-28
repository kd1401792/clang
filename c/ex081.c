#include<stdio.h>
#define NUM 8
int MAX(int *a);
int MIN(int *b);
int main(void)
{
	int data[8] = { 6,10,8,2,9,5,1,7 },min,max;
	int* p_data;
	p_data = data;
	max = MAX(p_data);
	min = MIN(p_data);
	printf("Å‘å’l = %d\nÅ¬’l = %d", max, min);
}
int MAX(int* a)
{
	int i, max;
	max = *a;
	for (i = 0; i <= NUM; i++)
	{
		if (max < *(a + i))
		{
			max = *(a + i);
		}
	}
	return max;
}
int MIN(int* p)
{
	int i2, min;
	min = *p;
	for (i2 = 0; i2 < NUM; i2++)
	{
		if (min >= *(p + i2))
		{
			min = *(p + i2);
		}
	}
	return min;
}