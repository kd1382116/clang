#include<stdio.h>
main() {
	char data[] = "gamesoft";
	int i;

	printf("文字列=");
	printf("%s\n",  & data[0]);

	i = 0;
	while (data[i] != '\0') {
		i++;
	}
	
	printf("文字数=%d文字\n", i);
}