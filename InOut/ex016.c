#include<stdio.h>
main()
{
	float a;
	printf("実数を入れて : ");
	scanf("%f", &a);
	printf("2倍すると : %6.2f\n3倍すると : %6.2f\n", a * 2, a * 3);
}