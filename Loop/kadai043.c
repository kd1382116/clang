#include <stdio.h>

 main() {
    int jisCode;

    while (1) {
        // ���[�U�[��JIS�R�[�h�̓��͂𑣂�
        printf("�����R�[�h����͂��Ă��������i�I������ɂ�-1����́j�F");
        scanf("%d", &jisCode);

        // ���͂�-1�̏ꍇ�A���[�v�𔲂��ďI������
        if (jisCode == -1) {
            break;
        }

        // JIS�R�[�h���L���Ȕ͈͂ɂ��邩�m�F����
        if (jisCode >= 0 && jisCode <= 255) {
            // JIS�R�[�h�𕶎��ɕϊ����ĕ\��
            printf("�Ή����镶���F%c\n", (char)jisCode);
        }
        else {
            // ������JIS�R�[�h�̏ꍇ�A�G���[���b�Z�[�W��\��
            printf("������JIS�R�[�h�ł��B0����255�͈͓̔��œ��͂��Ă��������B\n");
        }
    }

    // �v���O�����I�����b�Z�[�W
    printf("�v���O�������I�����܂��B\n");

    
}