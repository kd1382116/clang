#include<stdio.h>
enum BitState
{
	bese = 0,			//00000000’Êíó‘Ô
	poison = 0 << 0,	//00000001‚Ç‚­ó‘Ô
	sleep=1<<1,			//00000010‚Ë‚Ş‚èó‘Ô
	Paralysis =1 << 2,	//00000100‚Ü‚Ğó‘Ô
	Burn = 1 << 3,		//00001000‚â‚¯‚Çó‘Ô
	AtkUp = 1 << 5,		//00010000UŒ‚—ÍƒAƒbƒvó‘Ô
	AtkDown = 1 << 5	//00100000UŒ‚—Íƒ_ƒEƒ“ó‘Ô
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
	printf("****Œ»İ‚Ìó‘Ô****\n");
	if (s & poison) {
		printf("“Å\n");
	}
	if (s & sleep) {
		printf("‡–°\n");
	}
	if (s & Paralysis) {
		printf("‚Ü‚Ğ\n");
	}
	if (s & Burn) {
		printf("‚â‚¯‚Ç\n");
	}
	if (s & AtkUp) {
		printf("UŒ‚—Íã¸\n");
	}
	if (s & AtkDown) {
		printf("UŒ‚—ÍŒ¸­\n");
	}
	if (s == bese) {
		printf("’Êíó‘Ô\n");
	}
	printf("******************\n");
}
void ChangeFlag(UINT* s) {
	int change;
	while(1) {
		printf("‚Ç‚Ìó‘Ô‚É‚µ‚Ü‚·‚©H\n");
		printf("1:“Å ‚QF‡–° ‚RF‚Ü‚Ğ ‚SF‰Î ‚TFUŒ‚ª ‚UFUŒ‚« ‚OFI—¹");
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
		printf("‚Ç‚Ìó‘Ô‚ğ‰ñ•œ‚µ‚Ü‚·‚©H\n");
		printf("1:“Å ‚QF‡–° ‚RF‚Ü‚Ğ ‚SF‰Î ‚TFUŒ‚ª ‚UFUŒ‚« 7:‘S‰ğœ@‚OFI—¹");
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