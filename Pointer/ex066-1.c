#include<stdio.h>
main()
{
	char* p_game[3] = { "wii","ds","playstation4" }, ** p;
	p = p_game;
	for (int i = 0; i < 3; i++)
	{
		p = &p_game[i];
		while(**p)
		{
			printf("%c", *(*p)++);
		}
		printf("\n");
	}
}