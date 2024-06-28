#include<stdio.h>
#define DATA_END -1
void plus(int CODE; char NAME;);
struct menu_data { int code; char name[30]; struct menu_data *next; };

main()
{
	int end = 0,choose,code;
	char name;
	struct menu_data menu[] = { {1,"北海道",NULL}, { DATA_END,"",NULL } };
		while (end == 0)
		{

			printf("1:表示 2:追加 3:削除 9:終了 >");
			scanf("%d", &choose);
			if (choose == 1)
			{
				struct menu_data* p, * wp;

				p = wp = menu;
				do {
					p++;
					wp->next = p;
					wp = p;
				} while (p->code != DATA_END);

				for (p = menu; p->code != DATA_END; p = p->next)
				{
					printf("code = %d  name = %s\n", p->code, p->name);
				}
			}
			if (choose == 2)
			{
				printf("コードと県名を入力してください >");
				scanf("%d%s", &code, &name);
				plus(code, name);
			}
			if (choose == 3)
			{

			}
			if (choose == 9)
			{
				end = 1;
			}
		}
}
void plus(int CODE; char NAME;)
{

}