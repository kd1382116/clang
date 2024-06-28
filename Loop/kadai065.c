#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    int count = 0;

    do {
        printf("整数（終了コード：-999）：");
        scanf("%d", &num);

        if (num != -999) {
            sum += num;
            count++;
        }
    } while (num != -999);

    if (count > 0) {
        double average = (double)sum / count;
        printf("合計：%d\n", sum);
        printf("平均：%.2f\n", average);
    }
    else {
        printf("入力された整数がありません。\n");
    }

    return 0;
}