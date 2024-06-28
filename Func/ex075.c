#include<stdio.h>
void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syo);
main() {
	int a, b, c, d, e, f;
	printf("数値1？：");
	scanf("%d", &a);
	printf("数値2？：");
	scanf("%d", &b);
	shisoku(a, b, &c, &d, &e, &f);
	puts("数値と数値の四則演算");//putsは末尾に￥ｎ書かなくても改行される
	printf("wa=%d sa=%d seki=%d syou=%d\n", c, d, e, f);
}
void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syo) {
	*wa = x + y;
	*sa = x - y;
	*sk = x * y;
	if (y != 0) {
		*syo = x / y;
	}
	else {
		*syo = 0;  // 0 で割ることを防ぐ
	}
	return;
}