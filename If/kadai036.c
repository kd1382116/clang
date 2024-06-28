#include <stdio.h>

int main() {
    int num1, num2;

    // 2‚Â‚Ì®”‚Ì“ü—Í‚ð‘£‚·
    printf("Å‰‚Ì®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: ");
    scanf("%d", &num1);

    printf("ŽŸ‚Ì®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: ");
    scanf("%d", &num2);

    // ‘å¬ŠÖŒW‚Ì”»’è‚Æ•\Ž¦
    if (num1 > num2) {
        printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d‘å‚«‚¢\n", num1, num2, num1 - num2);
    }
    else if (num1 < num2) {
        printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è‚à%d¬‚³‚¢\n", num1, num2, num2 - num1);
    }
    else {
        printf("%d‚Æ%d‚Í“™‚µ‚¢\n", num1, num2);
    }

    return 0;
}