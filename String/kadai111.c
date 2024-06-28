#include<stdio.h>
main()
{
	char a[]="abcde";
	int i=0;
	while (a[i] != '\0') {
		printf("%c", a[i]);
		i++;
	}
}