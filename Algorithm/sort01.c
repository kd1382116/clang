#include<stdio.h>
#define SIZE 5
main() {
	int i, j,w;
	int d[SIZE] = { 30,7,25,16,10 };
	printf("�\�[�g�O\n");
	for (i = 0; i < SIZE; i++) {
		printf("d[%d]:%d\n", i, d[i]);
	}
	for (i = 0; i < SIZE; i++) {
		
		for (j = i + 1; j < 5; j++) {
			if (d[i] > d[j]) {
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}

	}

	printf("�\�[�g��\n");
	for (i = 0; i < SIZE; i++) {	
		printf("d[%d]:%d\n", i, d[i]);
	}
}