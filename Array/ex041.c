#include<stdio.h>
main()
{
	float box[3], g;
	int i;

	for (g = 0, i = 0; i < 3; i++) {
		printf("��������́F");
		scanf("%f", &box[i]);

		g += box[i];
	}
	printf("���v��%f�ł�\n", g);
	printf("���ς�%f�ł�\n", g / 3);
}