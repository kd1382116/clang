#include <stdio.h>

 main() { // 'main' �֐��̖߂�l�̌^���w��
    char day[7][10] = {
        "sunday",
        "monday",
        "tuesday",
        "wednesday",
        "thursday",
        "friday",
        "saturday"
    };

    for (int i = 0; i < 7; i++) {
        int j = 0;
        putchar('\n'); // ���s���o��
        while (day[i][j] != '\0') { // �e������̏I�[�܂Ń��[�v
            putchar(day[i][j]); // 1�������o��
            j++;
        }
    }
}