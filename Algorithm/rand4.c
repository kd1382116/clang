#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int n ,a;
	srand(time(0));
	n = rand() % 5 + 1;

	printf("�����̂��Ȃ��̉^���́A");
	for (a = 0; a < n; a++) {
		printf("�� ");
	}
	printf(" �ł��B\n");
}