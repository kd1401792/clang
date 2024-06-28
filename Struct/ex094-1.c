#include<stdio.h>
#include<string.h>
#define NUM 5

struct day {
	int nen; 
	int tuki; 
	int hi; 
};

struct profile {
	char name[20];
	struct day date;
	char blood[5];
};

main()
{
	struct profile data[NUM] = { 
		{ "adachi",2000,1,1,"A"},
		{"sano",2001,2,2,"B"},
		{"tanaka",2003,3,3,"AB"},
		{"yamada",2004,4,4,"A"},
		{"takeda",2005,5,5,"B"}
	};
	
	struct profile* p;
	p = data;


	for (int i = 0; i < NUM; i++, p++)
	{
		if (p->date.tuki == 2)
		{
			printf("%sーー　%d年%d月%d日生　血液型ー%s\n", p->name, p->date.nen, p->date.tuki, p->date.hi, p->blood);
		}
		else
		{

		}
	}
}