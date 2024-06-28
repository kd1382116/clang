#include<stdio.h>
main() {
	char data[] = "gamesoft";
	int i;

	printf("•¶š—ñ=");
	printf("%s\n",  & data[0]);

	i = 0;
	while (data[i] != '\0') {
		i++;
	}
	
	printf("•¶š”=%d•¶š\n", i);
}