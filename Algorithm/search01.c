#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main() {
	int d[10] = { 10,5,30,77,16,3,47,29,37,33 };
	int s, i;
	 
	printf("検索値ｓを入力");
	scanf("%d", &s);

	for (i = 0; i < 10; i++) {
		if (s == d[i]) {
			break;
		}
	}
	if (i == 10) {
		printf("見つからなかった");
	}
	else {
		printf("検索値%dはd%dで発見", s,i);
	}
}