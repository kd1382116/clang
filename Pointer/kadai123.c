#include <stdio.h>

 main() {
    double a, b;
    double* p_a = &a, * p_b = &b;

    printf("�����l1: ");
    scanf("%lf", &a);

    printf("�����l2: ");
    scanf("%lf", &b);

    printf("�傫���ق��́�");
    if (a < b) {
        printf("%lf\n", *p_b);
    }
    else {
        printf("%lf\n", *p_a);
    }

}