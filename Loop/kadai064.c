#include<stdio.h>
main()
{
	int a, i=0;
	a = 1;
	while (i != 20) {
		printf("%d ",a);
		i++;
		a++;
		if (i == 10) {
			printf("\n");
		}
	}
}