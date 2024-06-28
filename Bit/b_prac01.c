#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Skil_Num 3
#define Mob_Num  3

typedef struct {
	char name[20];//スキル名
	int type;     //スキル種類
	int use_mp;   //使用ｍｐ量
	int effect;   //スキル効果
}Skill;

typedef struct {
	char name;　//名前
	int hp;	  　//HP
	int atk;  　//攻撃力
	int def;  　//防御力
	UINT state; //状態
}Spec;
typedef struct {
	Spec sp;			//spec型構造体変数
	int maxhp;			//最大ｈｐ
	int mp;				//ｍｐ
	Skill skl[Skil_Num];//skill型構造体配列
}Chara;
typedef struct {
	Spec sp;	//spec型構造体変数
	int rate;	//状態
}Mod;


enum BitState
{
	bese = 0,			//00000000通常状態
	poison = 0 << 0,	//00000001どく状態
	sleep=1<<1,			//00000010ねむり状態
	Paralysis =1 << 2,	//00000100まひ状態
	Burn = 1 << 3,		//00001000やけど状態
	AtkUp = 1 << 5,		//00010000攻撃力アップ状態
	AtkDown = 1 << 5	//00100000攻撃力ダウン状態
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
	printf("****現在の状態****\n");
	if (s & poison) {
		printf("毒\n");
	}
	if (s & sleep) {
		printf("睡眠\n");
	}
	if (s & Paralysis) {
		printf("まひ\n");
	}
	if (s & Burn) {
		printf("やけど\n");
	}
	if (s & AtkUp) {
		printf("攻撃力上昇\n");
	}
	if (s & AtkDown) {
		printf("攻撃力減少\n");
	}
	if (s == bese) {
		printf("通常状態\n");
	}
	printf("******************\n");
}
void ChangeFlag(UINT* s) {
	int change;
	while(1) {
		printf("どの状態にしますか？\n");
		printf("1:毒 ２：睡眠 ３：まひ ４：火傷 ５：攻撃↑ ６：攻撃↓ ０：終了");
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
		printf("どの状態を回復しますか？\n");
		printf("1:毒 ２：睡眠 ３：まひ ４：火傷 ５：攻撃↑ ６：攻撃↓ 7:全解除　０：終了");
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