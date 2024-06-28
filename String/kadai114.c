#include<stdio.h>
main() {
	char data[100];
	int i;

	printf("•¶š—ñ=");
	scanf("%s", data);

	i = 0;
	while (data[i] != '\0') {
		i++;
	}
	printf("•¶š”=%d•¶š\n", i);
}