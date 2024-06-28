#include <stdio.h>

int main() {
    char* p_a[10] = { "kadai12h.c" };
    for (int i = 0; p_a[i] != NULL; i++) {
        printf("%s", p_a[i]);
    }
    return 0;
}