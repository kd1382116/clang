#include<stdio.h>

int add(int a, int b);
int hiku(int a, int b );
int kake(int a, int b);
int wari(int a, int b);
main()
{
	int a, b, kotae;
	printf("整数を2つ入力");
	scanf("%d%d", &a, &b);
	kotae = add(a , b);
	
	printf("合計は%dです\n", kotae);
	printf("引いた数は%dです\n", hiku(a, b));
	printf("かけた数はは%dです\n", kake(a, b));
	printf("割った数は%dです\n", wari(a, b));

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