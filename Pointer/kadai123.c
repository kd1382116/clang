#include <stdio.h>

 main() {
    double a, b;
    double* p_a = &a, * p_b = &b;

    printf("実数値1: ");
    scanf("%lf", &a);

    printf("実数値2: ");
    scanf("%lf", &b);

    printf("大きいほうは＝");
    if (a < b) {
        printf("%lf\n", *p_b);
    }
    else {
        printf("%lf\n", *p_a);
    }

}