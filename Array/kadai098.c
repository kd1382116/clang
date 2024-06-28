#include<stdio.h>
main()
{
	int data[] = { 10,5,23,29,2,6,3,1,70,100 };
    int n = sizeof(data) / sizeof(data[0]); // 配列の要素数を計算
    // 最大値と最小値を初期化
    int max = data[0];
    int min = data[0];

    // 配列の要素を走査して最大値と最小値を更新
    for (int i = 1; i < n; i++) {
        if (data[i] > max) {
            max = data[i]; // 最大値を更新
        }
        if (data[i] < min) {
            min = data[i]; // 最小値を更新
        }
    }
    printf("配列data={");
    for (int i = 1; i < n; i++) {
        printf("%d ", data[i]);
    }

    // 結果を出力
    printf("}\n最大値：%d\n", max);
    printf("最小値：%d\n", min);
}