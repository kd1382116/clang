#include<stdio.h>
main()
{
	int goukei, ia;
	float i = 0;
	goukei = 0;
	printf("���������āF");
	scanf("%d",&ia);
	while (ia != -999) {
		goukei += ia;
		printf("���������āF");
		scanf("%d", &ia);
		i++;
	}
	printf("���v��%d\n", goukei);
	printf("���ρ� %.2f\n", goukei/i);
}