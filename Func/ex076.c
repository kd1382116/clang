#include<stdio.h>
void aou(int a, int b,int*g,float*h);
main()
{
	int a, b, c;
	float d;
	printf("�������Q���́F");
	scanf("%d%d", &a, &b);
	aou(a, b, &c, &d);
	printf("���v��%d�A���ς�%.2f\n", c, d);
}
void aou(int a, int b, int* g, float* h)
{
	*g = a + b;
	*h = (a + b) / 2;
}
