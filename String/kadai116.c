#include<stdio.h>
main()
{
	char a[100], b[100], c[100];
	int i = 0, j = 0;
	printf("������P�H");
	scanf("%s", a);
	printf("������Q�H");
	scanf("%s", b);
	i = 0;
	while (a[i] != '\0') {
		i++;
	}
	while (b[j] != '\0') {
		a[i] = b[j];
		i++;
		j++;
	}
	a[i] = '\0'; // �Ō�Ƀk��������ǉ�

	// ���ʂ�\��
	printf("�������ꂽ������: %s\n", a);
}