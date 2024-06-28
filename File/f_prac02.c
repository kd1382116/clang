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
		printf("ファイルが読み取りません\n");
		return;
	}
	printf("最高得点　名前:%s ハイスコア:%d\n", max_name, max_score);
	printf("プレイヤー名を入力\n");
	scanf("%s", name);
	while (1) {
		printf("現在のスコア%d（eで終了）\n", score);
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
			printf("!!!!ハイスコア更新!!!!");
		}
		else {
			printf("ファイルが読み取りません");
			return;
		}
	}
}
