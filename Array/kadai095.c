#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int c=0,g=0;
	printf("配列a");
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
		c += a[i];
	}
	printf("\n合計＝%d", c);
	printf("\t平均＝%d", c / 10);
	printf("\n配列b");
	for (int i = 0; i < 10; i++) {
		printf("%d ", b[i]);
		g += a[i];
	}
	printf("\n合計＝%d", g);
	printf("\t平均＝%d", g/ 10);
}
