#include<stdio.h>

int add(int a, int b);
int hiku(int a, int b );
int kake(int a, int b);
int wari(int a, int b);
main()
{
	int a, b, kotae;
	printf("������2����");
	scanf("%d%d", &a, &b);
	kotae = add(a , b);
	
	printf("���v��%d�ł�\n", kotae);
	printf("����������%d�ł�\n", hiku(a, b));
	printf("���������͂�%d�ł�\n", kake(a, b));
	printf("����������%d�ł�\n", wari(a, b));

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