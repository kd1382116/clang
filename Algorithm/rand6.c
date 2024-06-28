#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int p, c;

	printf("何を出しますか？\n（1：ぐー　２：チョキ　３：パー　)");
	scanf("%d", &p);

	if (p == 1) {
		printf("プレイヤーはグーです。\n");
	}
	else {
		if (p == 2) {
			printf("プレイヤーはチョキです\n");
		}
		else {
			if (p == 3) {
				printf("プレイヤーはパーです\n");
			}
		}
	}

	srand(time(0));
	c = rand() % 3 + 1;
	if (c == 1) {
		printf("コンピューターはグーです。\n");
	}
	else {
		if (c == 2) {
			printf("コンピューターはチョキです\n");
		}
		else {
			if (c == 3) {
				printf("コンピューターはパーです\n");
			}
		}
	}
	if (p == c) {
		printf("あいこです\n");
	}
	else {
		if (p == 1 && c == 2) {
			printf("プレイヤーの勝ちです。");
		}
		else {
			if (p == 1 && c == 3) {
				printf("コンピューターの勝ちです。");
			}
			else {
				if (p == 2 && c == 1) {
					printf("コンピューターの勝ちです。");
				}
				else {
					if (p == 2 && c == 3) {
						printf("プレイヤーの勝ちです。");
					}
					else {
						if (p == 3 && c == 2) {
							printf("コンピューターの勝ちです。");
						}
						else {
							if (p == 3 && c == 1) {
								printf("プレイヤーのの勝ちです。");
							}
						}

					}
				}
			}
		}
	}
}



