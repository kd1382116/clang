#include<stdio.h>
main()
{
	int i;

	for (;; ) {
        for (i = 1; i <= 20; i++) {
            if (i % 2 == 0) { // �����̏ꍇ�̓X�L�b�v
                continue;
            }
            printf("%d\n", i); // ��̏ꍇ�̂ݕ\��
        }
	}
}