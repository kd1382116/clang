#include<stdio.h>
main()
{
	int a, i;
	i = 1;
	a = 1;
	do {
		printf("%d+", i);
		i++;
		a += i;
	} while (i != 25);
	printf("%d=%d", i, a);
}