#include<stdio.h>
main()
{
	int low, high, mid,s;
	int d[11] = { 10,15,18,23,28,35,47,55,68,78,96 };
	
	printf("検索値sを入力");
	scanf("%d", &s);
	
	low = 0;
	high = 10;
	while (low <= high) {
		mid = (low + high) / 2;
		if (s == d[mid]) {
			break;
		}
		if (s > d[mid]) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	
	if (low > high) {
		printf("見つからなかった");
	}
	else {
		printf("探索値%dを、d[%d]で発見!\n", s, mid);
	}
}