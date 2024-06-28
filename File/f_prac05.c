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
	printf("�\������}�b�v��I��(0,1,2):");
	scanf("%d", &select);
	//�}�b�v�ԍ��͈̔̓`�F�b�N
	if (select >= 0 && select <= 2) {
		//�}�b�v�f�[�^�t�@�C������̓ǂݍ���
		SetMap(MapFileName[select], &MapData);
		//�}�b�v�f�[�^�̉�ʕ\��
		DrawMap(MapData);
	}
	else {	
		puts("�G���[:0�`2�̒��œ��͂��Ă�������");
	}
}
//�}�b�v��ǂݎ��ϐ�
void SetMap(char* filename, Map* m) {
	FILE* fp;
	char ch;
	int i, j;
	//�t�@�C����ǂݎ�胂�[�h�ŊJ��
	if (fp = fopen(filename, "r")) {
		//H�~W�̃f�[�^�����ԂɈꕶ�����ǂݎ���Ă���
		for (i = 0; i < H; i++) {
			for (j = 0; j < W; j++) {
				ch = fgetc(fp);
				//�ǂݎ�����f�[�^�𐔒l�����ă����o�ɑ��
				m->m_map[i][j] = ch - '0';
			}
			//�s���̉��s�R�[�h��ǂݔ�΂�
			fgetc(fp);
		}
		fclose(fp);
	}
}
void DrawMap(Map m) {
	int i, j;
	//H�~W�̃}�b�v��\������
	for (i = 0; i < H; i++) {
		for (j = 0; j < W; j++) {
			if (m.m_map[i][j] == 1) {
				printf("��");
			}
			else if (m.m_map[i][j] == 0) {
				printf(" ");
			}
		}
		//�s���ŉ��s
		printf("\n");
	}
}