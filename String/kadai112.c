#include<stdio.h>
main()
{
	char a[]="abcde";
	char b[sizeof(a)];
	int i=0;
	int k=0;
	printf("コピー元");
	while (a[i] != '\0') {
		printf("%c", a[i]);
		b[i] = a[i];
		i++;
		k++;
	}
	b[i] = '\0';
	printf("\nコピー先: ");
	for (i=0; i<k; i++) {
		printf("%c", b[i]);
	}
}