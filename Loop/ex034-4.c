#include <stdio.h>
main()
{
	int n, i, j;
	printf("数は?");
	scanf("%d", &n);
	i = 0;
	do {
		j = 0;
		do {//半角スペースを表示
			printf(" ");
			j++;
		} while (j < n - i);
		j = 0;
		do {//＊を表示
			printf("*");
			j++;
		} while (j < i + 1);
		printf("\n");
		i++;

	}		 while (i < n);
}	