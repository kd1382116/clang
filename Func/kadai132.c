#include <stdio.h>

int main() {
    int b = 0;
    int i = 0;
    int a_i;

    while (1) {
        printf("��������͂��Ă��������iz�ŏI���j�F");
        if (scanf("%d", &a_i) == 1) {
            if (a_i == 'z') {
                break;
            }
            b += a_i;
            i++;
        }
        else {
            printf("�����𐳂������͂��Ă��������B\n");
            // �s���ȓ��͂��N���A����
            while (getchar() != '\n');
        }
    }

    if (i == 0) {
        printf("���͂��ꂽ��������܂���B\n");
    }
    else {
        int average = b / i;
        printf("���v�F%d\n", b);
        printf("���ρF%d\n", average);
    }

    return 0;
}
