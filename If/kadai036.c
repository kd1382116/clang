#include <stdio.h>

int main() {
    int num1, num2;

    // 2�̐����̓��͂𑣂�
    printf("�ŏ��̐�������͂��Ă�������: ");
    scanf("%d", &num1);

    printf("���̐�������͂��Ă�������: ");
    scanf("%d", &num2);

    // �召�֌W�̔���ƕ\��
    if (num1 > num2) {
        printf("%d�̂ق���%d���%d�傫��\n", num1, num2, num1 - num2);
    }
    else if (num1 < num2) {
        printf("%d�̂ق���%d����%d������\n", num1, num2, num2 - num1);
    }
    else {
        printf("%d��%d�͓�����\n", num1, num2);
    }

    return 0;
}