#include<stdio.h>
main()
{
	float box[3], g;
	int i;

	for (g = 0, i = 0; i < 3; i++) {
		printf("実数を入力：");
		scanf("%f", &box[i]);

		g += box[i];
	}
	printf("合計は%fです\n", g);
	printf("平均は%fです\n", g / 3);
}