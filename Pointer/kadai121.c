#include<stdio.h>
main()
{
	int a = 100, b = 10;
	int* d_a, * d_b;
	d_a = &a;
	d_b = &b;
	printf("%d+%d=%d", *d_a, *d_b, *d_a + *d_b);
	printf("%d-%d=%d", *d_a, *d_b, *d_a - *d_b);
	printf("%d*%d=%d", *d_a, *d_b, *d_a * *d_b);
	printf("%d/%d=%d", *d_a, *d_b, *d_a / *d_b);
}