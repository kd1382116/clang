#include<stdio.h>

int add(int a, int b);
int hiku(int a, int b );
int kake(int a, int b);
int wari(int a, int b);
main()
{
	int a, b, kotae;
	printf("®”‚ğ2‚Â“ü—Í");
	scanf("%d%d", &a, &b);
	kotae = add(a , b);
	
	printf("‡Œv‚Í%d‚Å‚·\n", kotae);
	printf("ˆø‚¢‚½”‚Í%d‚Å‚·\n", hiku(a, b));
	printf("‚©‚¯‚½”‚Í‚Í%d‚Å‚·\n", kake(a, b));
	printf("Š„‚Á‚½”‚Í%d‚Å‚·\n", wari(a, b));

}
int add(int a, int b)
{
	int ans;
	ans = a + b;
	return ans;
}
int hiku(int a, int b)
{
	return (a - b);
}
int kake(int a, int b) {
	return(a * b);
}
int wari(int a, int b) {
	return(a / b);
}