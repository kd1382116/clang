#include<stdio.h>
main()
{
	float a, b;
	printf("二つの実数は？");
	scanf("%f%f", &a, &b);

	if (a < b) {
		printf("大きいほうは＝%.6f", b);
	}
	else {
		printf("大きいほうは＝%.6f", a);
	}
}