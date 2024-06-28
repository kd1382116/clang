#include<stdio.h>
#define S 5
main() {
	int d[S] = { 30,7,25,16,10 };
	int i, j, w;
	printf("ソース前\n");
	for (i = 0; i < S; i++) {
		printf("d[%d]:%d\n", i, d[i]);
		
	}
	for (i = S - 1; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (d[j] > d[j] + 1]) {
				w = d[j];
				d[j] = d[j + 1];
				d[j + 1] = w;
			}
		}
	}
	printf("\nソート後\n");
	for (i = 0; i < S; i++) {
		printf("d[%d]:%d\n", i, d[i]);
	}
}