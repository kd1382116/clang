#include<stdio.h>
main()
{
	int score = 0;
	char ch;
	char name[256];
	FILE* fp;
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
	fp = fopen("score.txt", "w");
	fprintf(fp, "%s\n%d\n", name, score);
	fclose(fp);
}
