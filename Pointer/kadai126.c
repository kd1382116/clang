#include<stdio.h>
main()
{
    int data[] = { 10,9,1,20,45,21,38,45,88 };
    int size = sizeof(data) / sizeof(data[0]);
    int max = data[0];
    int min = data[0];

    // 配列の中から最大値と最小値を探す
    for (int i = 1; i < size; i++) {
        if (data[i] > max) {
            max = data[i];
        }
        if (data[i] < min) {
            min = data[i];
        }
    }

    // 最大値と最小値を出力する
    printf("最大値 = %d\n", max);
    printf("最小値 = %d\n", min);

}