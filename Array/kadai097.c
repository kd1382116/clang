#include<stdio.h>

 main() {
    int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
    int c[10];

    // 配列 c の計算
    for (int i = 0; i < 10; i++) {
        c[i] = a[9-i];
    }

    // 配列 a の出力
    printf("配列a=");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]); // 各要素の間にスペースを入れる
    }
    printf("\n");

    // 配列 c の出力
    printf("配列c=");
    for (int i = 0; i < 10; i++) {
        printf("%d ", c[i]); // 各要素の間にスペースを入れる
    }
    printf("\n");

}