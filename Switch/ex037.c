#include<stdio.h>
main()
{
	char a;
	printf("���Z�q�����āF");
	scanf("%c", &a);
	switch (a)
	{
	case'+':printf("���Z�ł�\n");
		break;
	case'-':printf("���Z�ł�\n");
		break;
	case'*':printf("��Z�ł�\n");
		break;
	case'/':printf("���Z�ł�\n");
		break;
	case'%':printf("���܂�ł�\n");
		break;

	default:printf("���̑��ł�\n");
		
	}
}