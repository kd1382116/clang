#include<stdio.h>
main()
{
    double data[5] = { 10.8, 20.3, 30.6, 40.4, 50.5 };
    double* p_data;
    double sum = 0.0; // 合計を保持する変数
    p_data = data;

    // 合計を計算
    for (int i = 0; i < 5; i++) {
        sum += *(p_data + i);
    }

    // 平均を計算
    double average = sum / 5;

    // 合計と平均を出力
    printf("合計＝%f\n", sum);
    printf("平均＝%f\n", average);
}