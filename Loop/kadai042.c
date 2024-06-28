#include<stdio.h>
main()
{
	int a ,b;
	a = 1;
	b = 0;

	while (a != 26) {
		printf("%d+", a);
		a = a + 1;
		b += a;
	}
	printf("=%d", b);
}