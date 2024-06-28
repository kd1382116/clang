#include <stdio.h>

int main() {
    int num1, num2;

    // 2つの整数の入力を促す
    printf("最初の整数を入力してください: ");
    scanf("%d", &num1);

    printf("次の整数を入力してください: ");
    scanf("%d", &num2);

    // 大小関係の判定と表示
    if (num1 > num2) {
        printf("%dのほうが%dより%d大きい\n", num1, num2, num1 - num2);
    }
    else if (num1 < num2) {
        printf("%dのほうが%dよりも%d小さい\n", num1, num2, num2 - num1);
    }
    else {
        printf("%dと%dは等しい\n", num1, num2);
    }

    return 0;
}