#include<stdio.h>
main()
{
    int data[] = { 10,9,1,20,45,21,38,45,88 };
    int size = sizeof(data) / sizeof(data[0]);
    int max = data[0];
    int min = data[0];

    // �z��̒�����ő�l�ƍŏ��l��T��
    for (int i = 1; i < size; i++) {
        if (data[i] > max) {
            max = data[i];
        }
        if (data[i] < min) {
            min = data[i];
        }
    }

    // �ő�l�ƍŏ��l���o�͂���
    printf("�ő�l = %d\n", max);
    printf("�ŏ��l = %d\n", min);

}