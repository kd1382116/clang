#include<stdio.h>
main()
{
	char a;
	
	printf("��������� :");
	scanf("%c", &a);

	if (a >= 'A' && 'Z') {
		printf("�ϊ������%c\n", a + 0x20);
	}
	else
	{
		if (a >= 'a' && 'z') {
			printf("�ϊ������%c\n", a - 0x20);
		}
		else
		{
			printf("�G���[�A�A���t�@�x�b�g����͂��Ă�������\n");
		}
	}
}