#include<stdio.h>
main()
{
	int a;
	char s[100];
	printf("回数と文字列を入力");
	scanf("%d%s", &a, s);
	for (int i = 0; i < a; i++) {
		printf("%s\t", s);
	}
}