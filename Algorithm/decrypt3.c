#include <stdio.h>
main()
{
	char s[21] ,k[21];
	int  i;
	printf("文字列を入力して下さい>");
	scanf("%s", &s[0]);
	printf("復号キーを入力");
	scanf("%s", &k[0]);

	for (i = 0; s[i] != '\0'; i++) {
		s[i] = s[i] - k[i]-(k[i]-'0');
	}
	printf("復号化文字列は、%s\n", s);
}