#include<stdio.h>
main()
{
	char* p_ride[3] = { "car","bus","shinkansen" };
	int i;
	char* p;

	for (i = 0; i < 3; i++) {
		p = p_ride[i];
		while (*p) {
			printf("%c\n", *p);
				p++;
		}
		printf("\n");
	}
}

