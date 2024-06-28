#include<stdio.h>
void ab(int a, int b, int c, int* max, int* min);

main() {
   int a, b, c, max, min;
    printf("整数を３つ入力：");
    scanf("%d%d%d", &a, &b, &c);
    ab(a, b, c, &max, &min);

    printf("最大値=%d　最小値=%d\n", max, min);
}
void ab(int a, int b, int c, int* max, int* min)
{
    *max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    *min = (a < b) ? (a < c ? a : c) : (b < c ? b : c);
}