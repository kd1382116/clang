#include<stdio.h>
main() {
	int  i;
	char s[20];
	printf("���������͂��Ă�������");
	scanf("%s", &s[0]);

	i = 0;
	while (s[i] != '\0') {
		s[i] =s[i]+1;
		i++;
	}
	printf("�Í����������%s\n", s);
}