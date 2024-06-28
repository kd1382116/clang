#include<stdio.h>
void aou(int a, int b,int*g,float*h);
main()
{
	int a, b, c;
	float d;
	printf("®”‚ğ‚Q‚Â“ü—ÍF");
	scanf("%d%d", &a, &b);
	aou(a, b, &c, &d);
	printf("‡Œv‚Í%dA•½‹Ï‚Í%.2f\n", c, d);
}
void aou(int a, int b, int* g, float* h)
{
	*g = a + b;
	*h = (a + b) / 2;
}
