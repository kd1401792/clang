#include<stdio.h>
#define NUM 8
int UP(int *p);
int DOWN(int *p);
int main(void)
{
	char sort;
	int data[NUM] = { 10,9,8,7,6,5,2,1 },*p_data;
	p_data = data;
	printf("ƒ\[ƒg•ûŒü‚ğ“ü—Í: ");
	scanf("%s", &sort);
	if (sort == "¸‡")
	{
		printf("u");

	}
	if (sort == "~‡")
	{
		printf("d");
	}
}