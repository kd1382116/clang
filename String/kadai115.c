#include<stdio.h>
main()
{
	char a[100];
	int i;
	printf("•¶š—ñ‚ÍH");
	scanf("%s", a);
	i = 0;
	while (a[i] != '\0') {
		i++;
	}
	for (int y = 0; y < i; y++) {
		printf("%c\n", a[y]);
	}

}