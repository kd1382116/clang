#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int k;

	srand(time(0));
	k= rand()%100+1;

	if (k <= 30) {
		printf("‰ïS‚ÌˆêŒ‚I\n");
	}
	else{
		printf("’ÊíUŒ‚\n");
	}
}