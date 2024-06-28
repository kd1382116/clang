#include<stdio.h>
void str(char *s1, char *s2);
main()
{
	char a[256], b[256];
	printf("”z—ña:");
	scanf("%s", &a);
	printf("”z—ñb:");
	scanf("%s", &b);
	str(a, b);
	printf("”z—ña:%s\n", a);

}
void str(char* s1, char* s2)
{
	int i, j;
	for (i = 0; *(s1 + i) != '\0'; i++);
	for (j = 0; *(s1 + i) =* (s2 + j); i++, j++);
	s1[i] = '\0';
	return;
}
