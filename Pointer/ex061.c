#include<stdio.h>
main() {
	char data[10] = "Orenge";
	char* p_data;
	char* p;
	p = "Apple";
	p_data = data;
	printf("data[ ]= ");
	while (*p_data) {
		putchar(*p_data++);
	}
	printf("\n*p = ");
	while (*p) {
		putchar(*p++);
	}
	putchar('\n');
}
