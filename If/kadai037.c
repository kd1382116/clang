#include <stdio.h>
main()
{
	int s;

	printf("０から１００までの整数？　　\n");

	scanf("%d", &s);

	if (s >= 90) {
		printf("その数値の判定結果は「５」です\n");
	}
	else {
		if (s <= 90 && s >= 80) {
			printf("その数値の判定結果は「４」です\n");
		}

		else {
			if (s <= 80 && s >= 50) {
				printf("その数値の判定結果は「３」です\n");
			}
			else
			{
				if (s <= 50 && s <= 30) {
					printf("その数値の判定結果は「２」です\n");
				}

				else {
					printf("その数値の判定結果は「１」です\n");
				}
			}
		}
	}
}
