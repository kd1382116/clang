#include <stdio.h>

void a() {
    char a;
    while (1) {
        printf("�����ia�`z�܂Łj����͂��Ă������� (EOF�ŏI��): ");
        scanf("%c", &a);
        if (a != EOF) {
            printf("%c\n", a);
        }
        else {
            break;
        }
    }
}

 main() {
     a();
}
