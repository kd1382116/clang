#include<stdio.h>
main()
{
	int a;
	char b;

	printf("�P�O�i���̐����H");
	scanf("%d", &a);
	printf("�A���t�@�x�b�g(o or h or d)�H");
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