#include<stdio.h>
main()
{
	int data[] = { 10,5,23,29,2,6,3,1,70,100 };
    int n = sizeof(data) / sizeof(data[0]); // �z��̗v�f�����v�Z
    // �ő�l�ƍŏ��l��������
    int max = data[0];
    int min = data[0];

    // �z��̗v�f�𑖍����čő�l�ƍŏ��l���X�V
    for (int i = 1; i < n; i++) {
        if (data[i] > max) {
            max = data[i]; // �ő�l���X�V
        }
        if (data[i] < min) {
            min = data[i]; // �ŏ��l���X�V
        }
    }
    printf("�z��data={");
    for (int i = 1; i < n; i++) {
        printf("%d ", data[i]);
    }

    // ���ʂ��o��
    printf("}\n�ő�l�F%d\n", max);
    printf("�ŏ��l�F%d\n", min);
}