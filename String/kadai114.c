#include<stdio.h>
main() {
	char data[100];
	int i;

	printf("文字列=");
	scanf("%s", data);

	i = 0;
	while (data[i] != '\0') {
		i++;
	}
	printf("文字数=%d文字\n", i);
}