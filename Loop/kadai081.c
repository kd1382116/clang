#include <stdio.h>

 main() {
    int num;
    int sum = 0;
    int count = 0;

    while (1) { // �������[�v
        printf("��������͂��Ă��������i�I���R�[�h�F-999�j�F");
        scanf("%d", &num);

        if (num == -999) {
            break; // ���͂�-999�̏ꍇ�A���[�v���I��
        }

        sum += num;
        count++;
    }

    if (count > 0) {
        double average = (double)sum / count;
        printf("���v�F%d\n", sum);
        printf("���ρF%.3f\n", average);
    }
    else {
        printf("���͂��ꂽ����������܂���B\n");
    }
}