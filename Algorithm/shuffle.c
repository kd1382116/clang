#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int i, data[20],work,target;

	for (i = 0; i < 20; i++) {
		data[i] = i + 1;
	}
	//確認用
	for (i = 0; i < 20; i++) {
		printf("data[%2d] = %2d\n", i, data[i]);
	}
	//入れ替え
	
	srand(time(0));
	for (i = 0; i < 20; i++) {
		target = rand() % 20;

		work = data[i];
		data[target] = data[i];
		work = data[target];
	}
	
	printf("\n");
	//確認用
	for (i = 0; i < 20; i++) {
		printf("data[%2d] = %2d\n", i, data[i]);
	}

}