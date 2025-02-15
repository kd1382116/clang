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
        printf("%d人目(名前):", i + 1);
        scanf("%s", p->name);
        printf("%d人目(生年月日 年 月 日):", i + 1);
        scanf("%d%d%d", &p->data.nen, &p->data.tuki, &p->data.hi);
        printf("%d人目(血液型):", i + 1);
        scanf("%s", p->blood);
    }

    for (p = data, i = 0; i < 5; i++, p++) {
        if (p->data.tuki == 2) {
            printf("%s-- %d 年 %02d 月 %02d 日生 血液型-%s型\n",
                p->name, p->data.nen, p->data.tuki, p->data.hi, p->blood);
        }
    }
}