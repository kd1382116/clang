#include<stdio.h>
main() {
	char data[100];
	int i;

	printf("������=");
	scanf("%s", data);

	i = 0;
	while (data[i] != '\0') {
		i++;
	}
	printf("������=%d����\n", i);
}