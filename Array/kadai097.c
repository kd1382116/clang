#include<stdio.h>

 main() {
    int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
    int c[10];

    // �z�� c �̌v�Z
    for (int i = 0; i < 10; i++) {
        c[i] = a[9-i];
    }

    // �z�� a �̏o��
    printf("�z��a=");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]); // �e�v�f�̊ԂɃX�y�[�X������
    }
    printf("\n");

    // �z�� c �̏o��
    printf("�z��c=");
    for (int i = 0; i < 10; i++) {
        printf("%d ", c[i]); // �e�v�f�̊ԂɃX�y�[�X������
    }
    printf("\n");

}