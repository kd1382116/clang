#include <stdio.h>

main() {
    int num;

    while (1) {
        // ���[�U�[�ɐ����̓��͂𑣂�
        printf("�����i�I������ɂ�-999����́j�F");
        scanf("%d", &num);

        // ���͂�-999�̏ꍇ�A���[�v�𔲂��ďI������
        if (num == -999) {
            break;
        }

        // ���͂��ꂽ���l��8�i����16�i���ŕ\��
        printf("8�i���F%o\t", num);
        printf("16�i���F%X\n", num);
    }

    // �v���O�����I�����b�Z�[�W
    printf("�v���O�������I�����܂��B\n");

  
}