#include<stdio.h>
main()
{
	int a = 100, b;//変数宣言
	int *p_a;//ポインタを宣言
	p_a = &a;//アドレスをセット
	b = *p_a;

	printf("a = %d b = %d *p_a = %d\n", a, b, *p_a);
}