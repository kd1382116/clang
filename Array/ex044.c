#include<stdio.h>
main() {
	char moji1[20], moji2[20],w[10];
	int i;
	printf("������P�����");
	scanf("%s", &moji1[0]);
	printf("������Q�����");
	scanf("%s", &moji2[0]);
	printf("moji1 = %s\tmoji2 = %s\n", &moji1[0], &moji2[0]);

	for (i = 0; w[i] = moji1[i] ; i++);
	for (i = 0; moji1[i] = moji2[i] ; i++);
	for (i = 0; moji2[i] = w[i] ; i++);
	printf("����ւ����\n moji1 = %s   moji2 = %s\n", &moji1[0], &moji2[0]);
}