#include <stdio.h>

void a() {
    char a;
    while (1) {
        printf("•¶šia`z‚Ü‚Åj‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ (EOF‚ÅI—¹): ");
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
