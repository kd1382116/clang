#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kazu;

	srand(time(0));//�������������i�V���b�t���j����

	
	kazu = rand();//�O�`�R�Q�V�U�V�͈̔͂ŗ��������߂�
	printf("��������������%d�ł�\n", kazu); 
	
	kazu = rand();//�O�`�R�Q�V�U�V�͈̔͂ŗ��������߂�
	printf("��������������%d�ł�\n", kazu);
	
	kazu = rand();//�O�`�R�Q�V�U�V�͈̔͂ŗ��������߂�
	printf("��������������%d�ł�\n", kazu);
}