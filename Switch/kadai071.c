#include<stdio.h>
main()
{
	int a, b;
	char k;
	printf("�����P�H");
	scanf("%d", &a);
	printf("����2�H");
	scanf("%d", &b); 
	printf("���Z�q�H");
	scanf(" %c", &k);
    switch (k) {
    case '+':
        printf("%d + %d = %d\n", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d\n", a, b, a - b);
        break;
    case '*':
        printf("%d * %d = %d\n", a, b, a * b);
        break;
    case '/':
        if (b != 0) {
            printf("%d / %d = %d\n", a, b, a / b);
        }
        else {
            printf("�G���[�F0�Ŋ��邱�Ƃ͂ł��܂���B\n");
        }
        break;
    default:
        printf("�G���[�F�����ȉ��Z�q�ł��B\n");
        break;
    }
}