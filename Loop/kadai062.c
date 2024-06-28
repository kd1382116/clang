#include <stdio.h>

main() {
    int i = 20;
    do {
        printf("%d ", i);
        if (i % 10 == 1) {
            printf("\n");
        }
        --i;
    } while (i >=1);
   
}