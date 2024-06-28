#include<stdio.h>
main()
{
	int goukei, ia;
	float i = 0;
	goukei = 0;
	printf("”š‚ğ“ü‚ê‚ÄF");
	scanf("%d",&ia);
	while (ia != -999) {
		goukei += ia;
		printf("”š‚ğ“ü‚ê‚ÄF");
		scanf("%d", &ia);
		i++;
	}
	printf("‡Œv%d\n", goukei);
	printf("•½‹Ï %.2f\n", goukei/i);
}