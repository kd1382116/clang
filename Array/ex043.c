#include<stdio.h>
#include<string.h>
main() {
	char data[] = "orangi";
	int i;

	printf("文字列：");
	printf("%s\n",  & data[0]);

	i = 0;
	while (data[i] != '\0') {
		i++;
	}
	
	printf("文字数は%d文字\n", i);
	printf("文字数は%d文字\n", strlen(data));
}