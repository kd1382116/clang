#include<stdio.h>
#include<string.h>
main() {
	char data[] = "orangi";
	int i;

	printf("•¶š—ñF");
	printf("%s\n",  & data[0]);

	i = 0;
	while (data[i] != '\0') {
		i++;
	}
	
	printf("•¶š”‚Í%d•¶š\n", i);
	printf("•¶š”‚Í%d•¶š\n", strlen(data));
}