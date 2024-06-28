#include <stdio.h>

 main() {
    int num;
    int sum = 0;
    int count = 0;

    while (1) { // 無限ループ
        printf("整数を入力してください（終了コード：-999）：");
        scanf("%d", &num);

        if (num == -999) {
            break; // 入力が-999の場合、ループを終了
        }

        sum += num;
        count++;
    }

    if (count > 0) {
        double average = (double)sum / count;
        printf("合計：%d\n", sum);
        printf("平均：%.3f\n", average);
    }
    else {
        printf("入力された整数がありません。\n");
    }
}