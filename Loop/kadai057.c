#include <stdio.h>

 main() {
    char inputChar;

    // ���[�U�[�ɏ��������ꕶ�����͂�����
    printf("�A���t�@�x�b�g�̏��������ꕶ�����͂��Ă��������F");
    scanf(" %c", &inputChar);

    // ���͂��ꂽ���������������ǂ������m�F����
    if (inputChar >= 'a' && inputChar <= 'z') {
        inputChar -= 32;
        // ���͂��ꂽ�������� 'z' �܂ł�\��
        for (char c = inputChar; c <= 'Z'; c++) {
            printf("%c ", c);
        }
        printf("\n");
    }
    else {
        printf("���͂��ꂽ�����͏������ł͂���܂���B\n");
    }
}