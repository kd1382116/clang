#include<stdio.h>
main()
{
	int s;

	printf("������́@�F�@\n");

	scanf("%d", &s);

	if (s ==2){
		printf("�ŏI���͂Q�W���ł�\n");

	}
	else {
		if (s == 4 || s == 6 || s == 9 || s == 11) {
			printf("�ŏI���͂R�O���ł�\n");
		}
		else
		{
			printf("�ŏI���͂R�P���ł�\n");

		}
	}	
}