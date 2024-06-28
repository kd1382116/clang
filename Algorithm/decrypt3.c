#include <stdio.h>
main()
{
	char s[21] ,k[21];
	int  i;
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‰º‚³‚¢>");
	scanf("%s", &s[0]);
	printf("•œ†ƒL[‚ğ“ü—Í");
	scanf("%s", &k[0]);

	for (i = 0; s[i] != '\0'; i++) {
		s[i] = s[i] - k[i]-(k[i]-'0');
	}
	printf("•œ†‰»•¶š—ñ‚ÍA%s\n", s);
}