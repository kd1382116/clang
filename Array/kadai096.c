#include <stdio.h>

int main() {
    int c[10];
    int i = 0;
    int input;

    printf("数値を入力してください（-999で終了）:\n");

    // 入力ループ
    while (i < 10) {
        printf("整数を入力: ");
        scanf("%d", &input);

        if (input == -999) {
            break;  // -999が入力されたらループを終了
        }

        c[i] = input;  // 配列に入力を格納
        i++;
    }

    // 配列の内容を表示
    printf("入力された数値:\n");
    for (int j = 0; j < i; j++) {
        printf("%d ", c[j]);
    }
    printf("\n");  // 出力を見やすくするために改行を追加

    return 0;
}