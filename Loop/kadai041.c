#include<stdio.h>
main()
{
	int goukei, ia;
	float i = 0;
	goukei = 0;
	printf("数字を入れて：");
	scanf("%d",&ia);
	while (ia != -999) {
		goukei += ia;
		printf("数字を入れて：");
		scanf("%d", &ia);
		i++;
	}
	printf("合計＝%d\n", goukei);
	printf("平均＝ %.2f\n", goukei/i);
}