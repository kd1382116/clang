#include<stdio.h>
main() {
	char data[] = "gamesoft";
	int i;

	printf("������=");
	printf("%s\n",  & data[0]);

	i = 0;
	while (data[i] != '\0') {
		i++;
	}
	
	printf("������=%d����\n", i);
}