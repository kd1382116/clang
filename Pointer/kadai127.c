#include<stdio.h>
main()
{
    double data[5] = { 10.8, 20.3, 30.6, 40.4, 50.5 };
    double* p_data;
    double sum = 0.0; // ���v��ێ�����ϐ�
    p_data = data;

    // ���v���v�Z
    for (int i = 0; i < 5; i++) {
        sum += *(p_data + i);
    }

    // ���ς��v�Z
    double average = sum / 5;

    // ���v�ƕ��ς��o��
    printf("���v��%f\n", sum);
    printf("���ρ�%f\n", average);
}