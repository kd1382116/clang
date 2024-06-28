#include <stdio.h>

main() {
    int num;

    while (1) {
        // ユーザーに整数の入力を促す
        printf("整数（終了するには-999を入力）：");
        scanf("%d", &num);

        // 入力が-999の場合、ループを抜けて終了する
        if (num == -999) {
            break;
        }

        // 入力された数値を8進数と16進数で表示
        printf("8進数：%o\t", num);
        printf("16進数：%X\n", num);
    }

    // プログラム終了メッセージ
    printf("プログラムを終了します。\n");

  
}