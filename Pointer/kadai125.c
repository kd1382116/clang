#include <stdio.h>

 main() {
    int data[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    int* p_data = data; // �|�C���^��z��̐擪�ɏ�����

    // �z��̗v�f���C���f�b�N�X�ŏo��
    for (int i = 0; i < 10; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    // �|�C���^���g���Ĕz��̗v�f���o��
    for (int i = 0; i < 10; i++) {
        printf("%d ", *p_data);
        p_data++; // �|�C���^�����̗v�f�Ɉړ�
    }
    printf("\n");
}