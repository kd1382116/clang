#include <stdio.h>

int main() {
    int a[] = { 3, 5, 7, 9, 11, 13, 15, 17, 19, 21 };
    int b[] = { 4, 8, 12, 16, 20, 24, 28, 32, 38, 42 };
    int c[10]; // ���ʂ��i�[����z��

    // a �� b �̗v�f�̘a�� c �Ɋi�[����
    for (int i = 0; i < 10; i++) {
        c[i] = a[i] + b[i];
    }

    // c �̓��e���o�͂���
    for (int i = 0; i < 10; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}