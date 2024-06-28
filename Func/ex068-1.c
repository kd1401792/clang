#include<stdio.h>
main()
{
	int a,b,cnt;
	printf("”‚ð‚QŒÂ“ü—Í> ");
	cnt = scanf("%d%d", &a, &b);
	
	if (cnt == EOF)
	{
		printf("EOF\n");
	}
	else {
		printf("%dŒÂ“ü—Í\n", cnt);
	}
}