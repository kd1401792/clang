#include<stdio.h>
#include<string.h>
#define NUM 5
struct profile { char name[20]; int birth[3]; char blood[5]; };
main()
{
	struct profile data[NUM];
	struct profile* p;
	p = data;
	int i;
	for (i = 0; i < NUM; i++, p++)
	{
		printf("名前を入力: ");
		scanf("%s", &p->name);
		printf("生年月日を空白で区切って入力: ");
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("血液型を入力: ");
		scanf("%s", &p->blood);
		printf("\n");
	}
	p = data;
	for (i = 0; i < NUM; i++, p++)
	{
		if (strcmp("A",p->blood)==0)
		{
			printf("%sーー　%d年%d月%d日生　血液型ー%s\n", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
		else
		{

		}
	}
}