#include <stdio.h>

int main() {
    int a[] = { 3, 5, 7, 9, 11, 13, 15, 17, 19, 21 };
    int b[] = { 4, 8, 12, 16, 20, 24, 28, 32, 38, 42 };
    int size_a = sizeof(a) / sizeof(a[0]);
    int size_b = sizeof(b) / sizeof(b[0]);
    int size_c = size_a + size_b;
    int c[size_c]; // 一つにまとめる配列

    int* ptr_a = a;
    int* ptr_b = b;
    int* ptr_c = c;

    printf("配列 a: ");
    for (int i = 0; i < size_a; i++) {
        printf("%d ", *ptr_a);
        *ptr_c = *ptr_a;
        ptr_a++;
        ptr_c++;
    }
    printf("\n配列 b: ");
    for (int i = 0; i < size_b; i++) {
        printf("%d ", *ptr_b);
        *ptr_c = *ptr_b;
        ptr_b++;
        ptr_c++;
    }
    printf("\n");

    printf("配列 c (a と b をまとめた配列): ");
    ptr_c = c;
    for (int i = 0; i < size_c; i++) {
        printf("%d ", *ptr_c);
        ptr_c++;
    }
    printf("\n");

    return 0;
}