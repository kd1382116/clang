#include <stdio.h>

int main() {
    int a[] = { 3, 5, 7, 9, 11, 13, 15, 17, 19, 21 };
    int b[10]; // �t���ɂ��邽�߂̔z��
    int size = sizeof(a) / sizeof(a[0]);

    printf("�z�� a (���̔z��): ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // �z�� a �̗v�f���t���ɂ��� b �Ɋi�[����
    for (int i = 0; i < size; i++) {
        b[i] = a[size - i - 1];
    }

    printf("�z�� b (�t���ɂ����z��): ");
    for (int i = 0; i < size; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}
