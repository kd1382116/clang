#include<stdio.h>
int dai(int a, int b);
main() {
	int a, b;
	printf("‚Q‚Â‚Ì®”H");
	scanf("%d %d", &a, &b);
	printf("max = %d", dai(a, b));
}
int dai(int a, int b) {
	if (a < b) {
		return b;
	}
	else {
		return a;
	}
}