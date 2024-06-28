#include <stdio.h>

int main() {
    char* p_a[10] = { "mikan" };
    char* p_b[10];

    // Copying strings from p_a to p_b
    for (int i = 0; p_a[i] != NULL; i++) {
        p_b[i] = p_a[i];
    }

    // Printing strings from p_b
    for (int i = 0; p_b[i] != NULL; i++) {
        printf("%s\n", p_b[i]);
    }

    return 0;
}