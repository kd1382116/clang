#include <stdio.h>

int main() {
    int a[] = { 3, 5, 7, 9, 11, 13, 15, 17, 19, 21 };
    int b[] = { 4, 8, 12, 16, 20, 24, 28, 32, 38, 42 };
    int size_a = sizeof(a) / sizeof(a[0]);
    int size_b = sizeof(b) / sizeof(b[0]);
    int size_c = size_a + size_b;
    int c[size_c]; // ��ɂ܂Ƃ߂�z��

    int* ptr_a = a;
    int* ptr_b = b;
    int* ptr_c = c;

    printf("�z�� a: ");
    for (int i = 0; i < size_a; i++) {
        printf("%d ", *ptr_a);
        *ptr_c = *ptr_a;
        ptr_a++;
        ptr_c++;
    }
    printf("\n�z�� b: ");
    for (int i = 0; i < size_b; i++) {
        printf("%d ", *ptr_b);
        *ptr_c = *ptr_b;
        ptr_b++;
        ptr_c++;
    }
    printf("\n");

    printf("�z�� c (a �� b ���܂Ƃ߂��z��): ");
    ptr_c = c;
    for (int i = 0; i < size_c; i++) {
        printf("%d ", *ptr_c);
        ptr_c++;
    }
    printf("\n");

    return 0;
}