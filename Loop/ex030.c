#include<stdio.h>
main()
{
	int a, b;
	b = 0;
	printf("数字を入れて");
	scanf("%d", &a);
	
	while (b <= 10) {
		printf(" %d + %d = %d \n", a, b, a + b);
		b++;

	}
}