#include <stdio.h>

 main() {
    // 'A' の ASCII コードは 65, 'Z' の ASCII コードは 90
    for (char c = 'A'; c <= 'Z'; c++) {
        printf("%c ", c);
    }

    // 最後に改行を追加
    printf("\n");
}