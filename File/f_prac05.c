#include<stdio.h>
#define mapNum 3
#define W 10
#define H 5

typedef struct {
	int m_map[H][W];
} Map;
void SetMap(char* filename, Map* m);
void DrawMap(Map m);
main()
{
	Map MapData;
	char* MapFileName[mapNum] = { "map0.txt","map1.txt","map2.txt" };
	int select;
	printf("表示するマップを選択(0,1,2):");
	scanf("%d", &select);
	//マップ番号の範囲チェック
	if (select >= 0 && select <= 2) {
		//マップデータファイルからの読み込み
		SetMap(MapFileName[select], &MapData);
		//マップデータの画面表示
		DrawMap(MapData);
	}
	else {	
		puts("エラー:0～2の中で入力してください");
	}
}
//マップを読み取る変数
void SetMap(char* filename, Map* m) {
	FILE* fp;
	char ch;
	int i, j;
	//ファイルを読み取りモードで開く
	if (fp = fopen(filename, "r")) {
		//H×W個のデータを順番に一文字ずつ読み取っていく
		for (i = 0; i < H; i++) {
			for (j = 0; j < W; j++) {
				ch = fgetc(fp);
				//読み取ったデータを数値化してメンバに代入
				m->m_map[i][j] = ch - '0';
			}
			//行末の改行コードを読み飛ばす
			fgetc(fp);
		}
		fclose(fp);
	}
}
void DrawMap(Map m) {
	int i, j;
	//H×Wのマップを表示する
	for (i = 0; i < H; i++) {
		for (j = 0; j < W; j++) {
			if (m.m_map[i][j] == 1) {
				printf("■");
			}
			else if (m.m_map[i][j] == 0) {
				printf(" ");
			}
		}
		//行末で改行
		printf("\n");
	}
}