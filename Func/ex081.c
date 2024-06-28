#include<stdio.h>

int Max(int* a, int s);
int Min(int* a, int s);

main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	printf("Å‘å’l%d\n", Max(data, 8));
	printf("Å¬’l%d\n", Min(data, 8));
}
int Max(int* a, int s) {
	int i, max;
	for (max = *a, i = 1; i < s; i++) {
		if (max < *(a+i)) {
			max = *(a+i);
		}
	}
	return max;
}
int Min(int* a, int s) {
	int i, min;
	for (min = *a, i = 1; i < s; i++) {
		if (min > *(a + i)) {
			min = *(a+ i);
		}
	}
	return min;
}
