#include <stdio.h>

int main() {
    int c[10];
    int i = 0;
    int input;

    printf("���l����͂��Ă��������i-999�ŏI���j:\n");

    // ���̓��[�v
    while (i < 10) {
        printf("���������: ");
        scanf("%d", &input);

        if (input == -999) {
            break;  // -999�����͂��ꂽ�烋�[�v���I��
        }

        c[i] = input;  // �z��ɓ��͂��i�[
        i++;
    }

    // �z��̓��e��\��
    printf("���͂��ꂽ���l:\n");
    for (int j = 0; j < i; j++) {
        printf("%d ", c[j]);
    }
    printf("\n");  // �o�͂����₷�����邽�߂ɉ��s��ǉ�

    return 0;
}