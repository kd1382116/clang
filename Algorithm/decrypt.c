#include<stdio.h>
main() {
	int  i;
	char s[20];
	printf("ˆÃ†‰»•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%s", &s[0]);

	i = 0;
	while (s[i] != '\0') {
		s[i] =s[i]-1;
		i++;
	}
	printf("‰»•¶š—ñ‚Í%s\n", s);
}