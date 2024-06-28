#include <stdio.h>
#include <string.h>

struct day {
    int nen;
    int tuki;
    int hi;
};

struct profile {
    char name[20];
    struct day data;
    char blood[5];
};

main() {
    struct profile data[5];
    struct profile* p;
    int i;

    for (p = data, i = 0; i < 5; i++, p++) {
        printf("%dl–Ú(–¼‘O):", i + 1);
        scanf("%s", p->name);
        printf("%dl–Ú(¶”NŒŽ“ú ”N ŒŽ “ú):", i + 1);
        scanf("%d%d%d", &p->data.nen, &p->data.tuki, &p->data.hi);
        printf("%dl–Ú(ŒŒ‰tŒ^):", i + 1);
        scanf("%s", p->blood);
    }

    for (p = data, i = 0; i < 5; i++, p++) {
        if (p->data.tuki == 2) {
            printf("%s-- %d ”N %02d ŒŽ %02d “ú¶ ŒŒ‰tŒ^-%sŒ^\n",
                p->name, p->data.nen, p->data.tuki, p->data.hi, p->blood);
        }
    }
}