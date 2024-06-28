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
        printf("ƒtƒ@ƒCƒ‹‚ªŒ©‚Â‚©‚è‚Ü‚¹‚ñ\n");
    }
}

void Display(Soldier* s) {
    for (int i = 0; i < Sol_Num; i++) {
        printf("%s\t‘Ì—Í:%d\n", (s+i)->name, (s+i)->hp);
        printf("•Ší:%s\t’e”:%d\t UŒ‚—Í:%.2f\n", (s+i)->wpn.Wname, (s+i)->wpn.bullet, (s+i)->wpn.atk);
    }
}