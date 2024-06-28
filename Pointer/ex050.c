#include<stdio.h>
main()
{
	int a = 100;//変数宣言
	int *p_a;//ポインタを宣言
	p_a = &a;//アドレスをセット
	
	printf("a = %d &a = %d\n", a, &a);
	printf("p_a = %d *p_a = %d &p_a = %d\n", p_a, *p_a, &p_a);
}