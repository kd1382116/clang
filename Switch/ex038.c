#include<stdio.h>
main()
{
	int a;
	printf("��������́F");
	scanf("%d", &a);
	if(10<=a&&49>=a){
		switch (a/10)
		{
		case 1:printf("�P�O�_��ł�\n");
			break;
		case 2:printf("�Q�O�_��ł�\n");
			break;
		case 3:printf("�R�O�_��ł�\n");
			break;
		case 4:printf("�S�O�_��ł�\n");
			break;
		}
	}
	else {
		printf("�G���[�F10�`49�͈̔͂œ��͂��Ă�������\n");
	}
}