#include<stdio.h>
main()
{
	float a, b;
	printf("��̎����́H");
	scanf("%f%f", &a, &b);

	if (a < b) {
		printf("�傫���ق��́�%.6f", b);
	}
	else {
		printf("�傫���ق��́�%.6f", a);
	}
}