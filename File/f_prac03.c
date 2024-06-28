#include <stdio.h>

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
void Display(Soldier s);

int main() {
    Soldier sol;
    SetInfo(&sol, "file03.txt");
    Display(sol);
    return 0;
}

void SetInfo(Soldier* s, char* filename) {
    FILE* fp;
    if ((fp = fopen(filename, "r")) != NULL) {
        fscanf(fp, "%s %d %s %d %f", s->name, &s->hp, s->wpn.Wname, &s->wpn.bullet, &s->wpn.atk);
        fclose(fp);
    }
    else {
        printf("ƒtƒ@ƒCƒ‹‚ªŒ©‚Â‚©‚è‚Ü‚¹‚ñ\n");
    }
}

void Display(Soldier s) {
    printf("%s\t‘Ì—Í:%d\n", s.name, s.hp);
    printf("•Ší:%s\t’e”:%d\t UŒ‚—Í:%.2f\n", s.wpn.Wname, s.wpn.bullet, s.wpn.atk);
}