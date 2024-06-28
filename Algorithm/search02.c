#include<stdio.h>
main()
{
	int s, i;
	int d[11] = { 10,5,30,77,16,3,47,29,37,33};

	printf("’Tõ’ls‚ğ“ü—Í");
	scanf("%d", &s);

	for (d[10] = s, i = 0; s != d[i]; i++);

	if (i == 10) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½");
	}
	else {
		printf("’Tõ’l%d‚ğAd[%d]‚Å”­Œ©!\n", s, i);
	}
}