#include<stdio.h>
main()
{
	int a[5][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15,},
		{16,17,18,19,20},{21,22,23,24,25} };
	int b[5][5] = { {3,6,9,12,15},{18,21,24,27,30},{33,36,39,42,45},
		{48,51,54,57,60},{63,66,69,72,75} };
	int c[5][5];
	for (int i = 0; i < 5; i++) {
		for (int u = 0; u < 5; u++) {
			c[i][u] = a[i][u];
			a[i][u] = b[i][u];
			b[i][u] = c[i][u];
			printf("%d ", a[i][u]);
			
		}
		printf("\n");
	}
	
	for (int i = 0; i < 5; i++) {
		for (int u = 0; u < 5; u++) {
			printf("%d ", b[i][u]);
		}
		printf("\n");
	}
}
