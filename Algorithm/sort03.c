#include<stdio.h>
#define S 5
main() {
	int d[S] = { 30,7,25,16,10 };
	int i, j, w;
	printf("�\�[�X�O\n");
	for (i = 0; i < S; i++) {
		printf("d[%d]:%d\n", i, d[i]);
		
	}
	for (i = 1; i < S; i++) {
		for (j = i - 1; j >= 0; j--) {
			if (d[j + 1] >= d[j]) {
				break;
			}
			w = d[j];
			d[j] = d[j + 1];
			d[j + 1] = w;
		}
	}

	printf("\n�\�[�g��\n");
	for (i = 0; i < S; i++) {
		printf("d[%d]:%d\n", i, d[i]);
	}
}