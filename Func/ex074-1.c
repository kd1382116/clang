#include<stdio.h>
void display1(int n1);
void display2(int* n2);
void setTextColor(const char* color) {
	printf("%s", color);
}
main() {
	int a, b;
	setTextColor("\033[35m");  // Set text to red
	printf("This text is red\n");

	printf("数値a?:");
	scanf("%d", &a);
	display1(a);
	printf("a=%d\n\n", a);
	printf("数値b?:");
	scanf("%d", &b);
	display2(&b);
	printf("b=%d\n\n", b);
	setTextColor("\033[0m");  // Reset to default color
	printf("This text is in default color\n");
}
void display1(int n)
{
	
	printf("数値aは、%dです\n", n);
	n += 10;
	return;
}
void display2(int* n2)
{
	printf("数値bは、%dです\n",*n2);
	*n2 += 10;
	return;
}