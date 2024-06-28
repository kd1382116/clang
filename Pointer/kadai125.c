#include <stdio.h>

 main() {
    int data[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    int* p_data = data; // ポインタを配列の先頭に初期化

    // 配列の要素をインデックスで出力
    for (int i = 0; i < 10; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    // ポインタを使って配列の要素を出力
    for (int i = 0; i < 10; i++) {
        printf("%d ", *p_data);
        p_data++; // ポインタを次の要素に移動
    }
    printf("\n");
}