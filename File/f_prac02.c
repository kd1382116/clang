#include<stdio.h>
main()
{
	int max_score,score = 0;
	char ch;
	char name[256],max_name[256];
	FILE* fp;
	if (fp = fopen("score.txt", "r")) {
		fscanf(fp, "%s%d", max_name, &max_score);
		fclose(fp);
	}
	else {
		printf("�t�@�C�����ǂݎ��܂���\n");
		return;
	}
	printf("�ō����_�@���O:%s �n�C�X�R�A:%d\n", max_name, max_score);
	printf("�v���C���[�������\n");
	scanf("%s", name);
	while (1) {
		printf("���݂̃X�R�A%d�ie�ŏI���j\n", score);
		ch = getch();
		if (ch == 'e') {
			break;
		}
		score++;
	}
	if (max_score < score) {
		if (fp = fopen("score.txt", "w")) {
			fprintf(fp, "%s\n%d\n", name, score);
			fclose(fp);
			printf("!!!!�n�C�X�R�A�X�V!!!!");
		}
		else {
			printf("�t�@�C�����ǂݎ��܂���");
			return;
		}
	}
}
