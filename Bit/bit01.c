#include<stdio.h>
enum BitState
{
	bese = 0,			//00000000�ʏ���
	poison = 0 << 0,	//00000001�ǂ����
	sleep=1<<1,			//00000010�˂ނ���
	Paralysis =1 << 2,	//00000100�܂Џ��
	Burn = 1 << 3,		//00001000�₯�Ǐ��
	AtkUp = 1 << 5,		//00010000�U���̓A�b�v���
	AtkDown = 1 << 5	//00100000�U���̓_�E�����
};
typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);
main()
{
	UINT myState = bese;
	ChangeFlag(&myState);
	DisplayStatus(myState);
	ClearFlag(&myState);
	DisplayStatus(myState);
}
void DisplayStatus(UINT s) {
	printf("****���݂̏��****\n");
	if (s & poison) {
		printf("��\n");
	}
	if (s & sleep) {
		printf("����\n");
	}
	if (s & Paralysis) {
		printf("�܂�\n");
	}
	if (s & Burn) {
		printf("�₯��\n");
	}
	if (s & AtkUp) {
		printf("�U���͏㏸\n");
	}
	if (s & AtkDown) {
		printf("�U���͌���\n");
	}
	if (s == bese) {
		printf("�ʏ���\n");
	}
	printf("******************\n");
}
void ChangeFlag(UINT* s) {
	int change;
	while(1) {
		printf("�ǂ̏�Ԃɂ��܂����H\n");
		printf("1:�� �Q�F���� �R�F�܂� �S�F�Ώ� �T�F�U���� �U�F�U���� �O�F�I��");
		scanf("%d", &change);
		if(change==0){
			break;
		}
		switch (change) {
		case 1:*s |= poison;
			break;
		case 2:*s |= sleep;
			break;
		case 3:*s |= Paralysis;
			break;
		case 4:*s |= Burn;
			break;
		case 5:*s |= AtkUp;
			break;
		case 6:*s |= AtkDown;
			break;
		}
	}
}
void ClearFlag(UINT* s) {
	int change;
	while (1) {
		printf("�ǂ̏�Ԃ��񕜂��܂����H\n");
		printf("1:�� �Q�F���� �R�F�܂� �S�F�Ώ� �T�F�U���� �U�F�U���� 7:�S�����@�O�F�I��");
		scanf("%d", &change);
		if (change == 0) {
			break;
		}
		switch (change) {
		case 1:*s &= ~poison;
			break;
		case 2:*s &= ~sleep;
			break;
		case 3:*s &= ~Paralysis;
			break;
		case 4:*s &= ~Burn;
			break;
		case 5:*s &= ~AtkUp;
			break;
		case 6:*s &= ~AtkDown;
			break;
		case 7: *s = bese;
			break;
		}
	}
}