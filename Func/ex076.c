#include<stdio.h>
void aou(int a, int b,int*g,float*h);
main()
{
	int a, b, c;
	float d;
	printf("整数を２つ入力：");
	scanf("%d%d", &a, &b);
	aou(a, b, &c, &d);
	printf("合計は%d、平均は%.2f\n", c, d);
}
void aou(int a, int b, int* g, float* h)
{
	*g = a + b;
	*h = (a + b) / 2;
}
