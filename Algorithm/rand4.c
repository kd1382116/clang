#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int n ,a;
	srand(time(0));
	n = rand() % 5 + 1;

	printf("今日のあなたの運勢は、");
	for (a = 0; a < n; a++) {
		printf("☆ ");
	}
	printf(" です。\n");
}