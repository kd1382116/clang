#include <stdio.h>

int main() {
    int a[] = { 3, 5, 7, 9, 11, 13, 15, 17, 19, 21 };
    int b[10]; // 逆順にするための配列
    int size = sizeof(a) / sizeof(a[0]);

    printf("配列 a (元の配列): ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // 配列 a の要素を逆順にして b に格納する
    for (int i = 0; i < size; i++) {
        b[i] = a[size - i - 1];
    }

    printf("配列 b (逆順にした配列): ");
    for (int i = 0; i < size; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}
