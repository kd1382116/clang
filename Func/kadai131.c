#include <stdio.h>

void a() {
    char a;
    while (1) {
        printf("文字（a〜zまで）を入力してください (EOFで終了): ");
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
