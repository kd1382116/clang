#include<stdio.h>
#include<string.h>
main() {
	char data[] = "orangi";
	int i;

	printf("������F");
	printf("%s\n",  & data[0]);

	i = 0;
	while (data[i] != '\0') {
		i++;
	}
	
	printf("��������%d����\n", i);
	printf("��������%d����\n", strlen(data));
}