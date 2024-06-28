#include<stdio.h>
main()
{
	char* p_game[3] = { "wii","ds","playstation4" },**p;
	p = p_game;
	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", *p++);
	}
}