#include<stdio.h>
main() {
	int a, sum = 0,i=0;
	
	printf("整数：");
	while (scanf("%d", &a) != EOF) {
		sum += a;
		printf("整数：");
		i++;
	}
	printf("合計＝%d　平均＝%.2f\n", sum, (float)sum / i);
}
