#include<stdio.h>
#include<string.h>
main() {
	char* p_tbl[] = { "Programming2", "Algorithm", "Programming1", "C" };
	int i, j;
	char* p_work;//ワークエリア

	for (i = 0; i < 3; i++)//比較元用ループ
		{
		for (j = i + 1; j < 4; j++)//比較先用ループ 
			{
				if (strcmp(p_tbl[i] , p_tbl[j])==1)//比較元と比較先を比べる
				{
					//入れ替え処理
					p_work = p_tbl[i];
					p_tbl[i] = p_tbl[j];
					p_tbl[j] = p_work;
				}
			}
			for (i = 0; i < 4; i++) {
				printf("%s\n", p_tbl[i]);
			}
		}
}

