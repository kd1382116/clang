#include<stdio.h>
main()
{
	int a, b;

	printf("2つの数値?");
	scanf("%d%d", &a, &b);
	printf("%d+%d=%d\n", a, b, a + b);
	printf("%d-%d=%d\n", a, b, a - b);
	printf("%d*%d=%d\n", a, b, a * b);
	printf("%d/%d=%dあまり%d\n",a, b, a / b, a % b);

}