#include<stdio.h>
main()
{
	int n,i,s;

	printf("数字は？");
	scanf("%d", &n);
	s = 0, i = 0;
	for (; n != -999; ) {
		s += n;
		printf("数字は？");
		scanf("%d", &	n);
		i++;
	}
	printf("合計は＝%d\t 平均＝%.2f\n", s, (float)s / i);
}