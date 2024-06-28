#include<stdio.h>
main()
{
	int a[5] [5] = {{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20},
		{21,22,23,24,25} };
	int b[5][5];
	for (int i=0; i < 5; i++) {
		for (int u=0; u < 5; u++) {
			b[i][u] = a[i][u];
			printf("%d ", b[i][u]);
			
		}
		printf("\n");
	}
}