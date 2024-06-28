#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int  i;
	srand(time(0));

	
	for (i = 0; i <= 100; i++) {
		printf("%4d", rand() % 300 + 1);
	}
}