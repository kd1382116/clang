#include<stdio.h>
main()
{
	int a, b;
	char k;
	printf("整数１？");
	scanf("%d", &a);
	printf("整数2？");
	scanf("%d", &b); 
	printf("演算子？");
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
            printf("エラー：0で割ることはできません。\n");
        }
        break;
    default:
        printf("エラー：無効な演算子です。\n");
        break;
    }
}