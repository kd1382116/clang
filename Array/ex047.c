#include<stdio.h>
main()
{
	float x[3][2], s;
	int i, j;
	s = 0;

	for (i = 0; i < 3; i++) {
		for (j = 0 ,s=0; j < 2; j++) {
			printf("x[%d][%d] = ", i, j);
			scanf("%f", &x[i][j]);
			s += x[i][j];
		}
		printf("%ds–Ú‚Ì•½‹Ï%.2f\n\n", i, s / 2);
	}
}