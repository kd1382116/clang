#include <stdio.h>

 main() {
    char inputChar;

    // ユーザーに小文字を一文字入力させる
    printf("アルファベットの小文字を一文字入力してください：");
    scanf(" %c", &inputChar);

    // 入力された文字が小文字かどうかを確認する
    if (inputChar >= 'a' && inputChar <= 'z') {
        // 入力された文字から 'z' までを表示
        for (char c = inputChar; c <= 'z'; c++) {
            printf("%c ", c);
        }
        printf("\n");
    }
    else {
        printf("入力された文字は小文字ではありません。\n");
    }
}