#include<stdio.h>
main()
{
	int a;
	char b;

	printf("１０進数の整数？");
	scanf("%d", &a);
	printf("アルファベット(o or h or d)？");
	scanf(" %c",&b);
	switch (b)
	{
	case'o':printf("%o", a);
		break;
	case'h':printf("%h", a);
		break;
	default:printf("%d", a);
		break;
	}
}