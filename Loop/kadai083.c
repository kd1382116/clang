#include<stdio.h>
main()
{
	int i;

	for (;; ) {
        for (i = 1; i <= 20; i++) {
            if (i % 2 == 0) { // 偶数の場合はスキップ
                continue;
            }
            printf("%d\n", i); // 奇数の場合のみ表示
        }
	}
}