#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int p, c;

	printf("�����o���܂����H\n�i1�F���[�@�Q�F�`���L�@�R�F�p�[�@)");
	scanf("%d", &p);

	if (p == 1) {
		printf("�v���C���[�̓O�[�ł��B\n");
	}
	else {
		if (p == 2) {
			printf("�v���C���[�̓`���L�ł�\n");
		}
		else {
			if (p == 3) {
				printf("�v���C���[�̓p�[�ł�\n");
			}
		}
	}

	srand(time(0));
	c = rand() % 3 + 1;
	if (c == 1) {
		printf("�R���s���[�^�[�̓O�[�ł��B\n");
	}
	else {
		if (c == 2) {
			printf("�R���s���[�^�[�̓`���L�ł�\n");
		}
		else {
			if (c == 3) {
				printf("�R���s���[�^�[�̓p�[�ł�\n");
			}
		}
	}
	if (p == c) {
		printf("�������ł�\n");
	}
	else {
		if (p == 1 && c == 2) {
			printf("�v���C���[�̏����ł��B");
		}
		else {
			if (p == 1 && c == 3) {
				printf("�R���s���[�^�[�̏����ł��B");
			}
			else {
				if (p == 2 && c == 1) {
					printf("�R���s���[�^�[�̏����ł��B");
				}
				else {
					if (p == 2 && c == 3) {
						printf("�v���C���[�̏����ł��B");
					}
					else {
						if (p == 3 && c == 2) {
							printf("�R���s���[�^�[�̏����ł��B");
						}
						else {
							if (p == 3 && c == 1) {
								printf("�v���C���[�̂̏����ł��B");
							}
						}

					}
				}
			}
		}
	}
}



