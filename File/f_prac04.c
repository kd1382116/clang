#include <stdio.h>
#define Sol_Num 3

typedef struct {
    char Wname[20];
    int bullet;
    float atk;
} Weapon;

typedef struct {
    char name[20];
    int hp;
    Weapon wpn;
} Soldier;

void SetInfo(Soldier* s, char* filename);
void Display(Soldier* s);

int main() {
    Soldier sol[Sol_Num];
    
        SetInfo(sol, "file04.txt");
        Display(sol);
    return 0;
}

void SetInfo(Soldier* s, char* filename) {
    FILE* fp;
    if ((fp = fopen(filename, "r")) != NULL) {
        for (int i = 0; i < Sol_Num; i++) {
            fscanf(fp, "%s %d %s %d %f", (s+i)->name, &(s+i)->hp, (s+i)->wpn.Wname, &(s+i)->wpn.bullet, &(s+i)->wpn.atk);
        }
        fclose(fp);
    }
    else {
        printf("ファイルが見つかりません\n");
    }
}

void Display(Soldier* s) {
    for (int i = 0; i < Sol_Num; i++) {
        printf("%s\t体力:%d\n", (s+i)->name, (s+i)->hp);
        printf("武器:%s\t弾数:%d\t 攻撃力:%.2f\n", (s+i)->wpn.Wname, (s+i)->wpn.bullet, (s+i)->wpn.atk);
    }
}