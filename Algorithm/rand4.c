#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int n ,a;
	srand(time(0));
	n = rand() % 5 + 1;

	printf("¡“ú‚Ì‚ ‚È‚½‚Ì‰^¨‚ÍA");
	for (a = 0; a < n; a++) {
		printf("™ ");
	}
	printf(" ‚Å‚·B\n");
}