#include <stdio.h>

 main() { // 'main' 関数の戻り値の型を指定
    char day[7][10] = {
        "sunday",
        "monday",
        "tuesday",
        "wednesday",
        "thursday",
        "friday",
        "saturday"
    };

    for (int i = 0; i < 7; i++) {
        int j = 0;
        putchar('\n'); // 改行を出力
        while (day[i][j] != '\0') { // 各文字列の終端までループ
            putchar(day[i][j]); // 1文字を出力
            j++;
        }
    }
}