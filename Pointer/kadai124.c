#include<stdio.h>
main() {
	char a, * p_a = &a;
	printf("１文字入力？");
	scanf("%c", &a);
	*p_a += 1;
	printf("次の文字は%c", *p_a);
}