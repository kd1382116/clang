#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int i, data[20],work,target;

	for (i = 0; i < 20; i++) {
		data[i] = i + 1;
	}
	//�m�F�p
	for (i = 0; i < 20; i++) {
		printf("data[%2d] = %2d\n", i, data[i]);
	}
	//����ւ�
	
	srand(time(0));
	for (i = 0; i < 20; i++) {
		target = rand() % 20;

		work = data[i];
		data[target] = data[i];
		work = data[target];
	}
	
	printf("\n");
	//�m�F�p
	for (i = 0; i < 20; i++) {
		printf("data[%2d] = %2d\n", i, data[i]);
	}

}