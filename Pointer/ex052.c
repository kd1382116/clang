#include<stdio.h>
main() {
	int a, b, w;
	int* p_a, * p_b;
	a = 100;
	b = 200;

	p_a = &a;
	p_b = &b;

	printf("実行前：a = %d\tb = %d\n", a, b);
	//ポインタを使用して入れ替え処理
	w = *p_a;
	*p_a = *p_b;
	*p_b = w ;

	printf("実行後：a = %d\tb = %d\n", a,  b);


}