#include <stdio.h>
#include <string.h>
void reverse_string(const char str1[], char str2[]);
 main() {
    char str1[100], str2[100];

    // ���[�U�[���當����̓��͂𑣂�
    printf("������H ");
    gets(str1);
    // ��������t���ɂ���֐����Ăяo��
    reverse_string(str1, str2);

    // �t���̕������\��
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    
}
// ��������t���ɂ���֐�
void reverse_string(const char str1[], char str2[]) {
    int length = strlen(str1);
    for (int i = 0; i < length; i++) {
        str2[i] = str1[length - 1 - i];
    }
    str2[length] = '\0'; // ������̏I�[��ǉ�
}
