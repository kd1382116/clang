#include <stdio.h>

 main() {
    double a, b;
    double* p_a = &a, * p_b = &b;

    printf("À”’l1: ");
    scanf("%lf", &a);

    printf("À”’l2: ");
    scanf("%lf", &b);

    printf("‘å‚«‚¢‚Ù‚¤‚Í");
    if (a < b) {
        printf("%lf\n", *p_b);
    }
    else {
        printf("%lf\n", *p_a);
    }

}