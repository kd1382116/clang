#include <stdio.h>

int main() {
    int b = 0;
    int i = 0;
    int a_i;

    while (1) {
        printf("整数を入力してください（zで終了）：");
        if (scanf("%d", &a_i) == 1) {
            if (a_i == 'z') {
                break;
            }
            b += a_i;
            i++;
        }
        else {
            printf("整数を正しく入力してください。\n");
            // 不正な入力をクリアする
            while (getchar() != '\n');
        }
    }

    if (i == 0) {
        printf("入力された数がありません。\n");
    }
    else {
        int average = b / i;
        printf("合計：%d\n", b);
        printf("平均：%d\n", average);
    }

    return 0;
}
