#include<stdio.h>
main()
{
	float a,b;
	printf("��̎��������");
	scanf("%f%f", &a, &b);

	printf("�a�� % .6f ���� % .6f �ρ� % .6f ���� % .6f", a + b, a - b, a * b, a / b);
}