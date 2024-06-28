#include<stdio.h>
main()
{
	char a[100], b[100], c[100];
	int i = 0, j = 0;
	printf("•¶š—ñ‚PH");
	scanf("%s", a);
	printf("•¶š—ñ‚QH");
	scanf("%s", b);
	i = 0;
	while (a[i] != '\0') {
		i++;
	}
	while (b[j] != '\0') {
		a[i] = b[j];
		i++;
		j++;
	}
	a[i] = '\0'; // ÅŒã‚Éƒkƒ‹•¶š‚ğ’Ç‰Á

	// Œ‹‰Ê‚ğ•\¦
	printf("Œ‹‡‚³‚ê‚½•¶š—ñ: %s\n", a);
}