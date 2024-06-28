#include <stdio.h>

 main() {
    int i, j;

    // ‹ã‹ã‚Ì•\‚ð•\Ž¦
    printf("  |");
    for (i = 1; i <= 9; i++) {
        printf("%3d", i);
    }
    printf("\n");

    printf("--+---------------------------\n");

    for (i = 1; i <= 9; i++) {
        printf("%d |", i);
        for (j = 1; j <= 9; j++) {
            printf("%3d", i * j);
        }
        printf("\n");
    }

}