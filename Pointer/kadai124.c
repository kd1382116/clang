#include<stdio.h>
main() {
	char a, * p_a = &a;
	printf("�P�������́H");
	scanf("%c", &a);
	*p_a += 1;
	printf("���̕�����%c", *p_a);
}