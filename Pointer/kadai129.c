#include <stdio.h>

int main() {
    int a[] = { 3, 5, 7, 9, 11, 13, 15, 17, 19, 21 };
    int b[] = { 4, 8, 12, 16, 20, 24, 28, 32, 38, 42 };
    int c[10]; // 結果を格納する配列

    // a と b の要素の和を c に格納する
    printf("実行前\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
        c[i] = a[i];
    }
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", b[i]);
        a[i] = b[i];
    }
    printf("\n");
    printf("実行後\n");
    for (int i = 0; i < 10; i++) {
        b[i] = c[i];
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", b[i]);
    }


    return 0;
}