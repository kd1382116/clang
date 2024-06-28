#include<stdio.h>
main()
{
	float box[3], g;
	int i;

	for (g = 0, i = 0; i < 3; i++) {
		printf("ŽÀ”‚ð“ü—ÍF");
		scanf("%f", &box[i]);

		g += box[i];
	}
	printf("‡Œv‚Í%f‚Å‚·\n", g);
	printf("•½‹Ï‚Í%f‚Å‚·\n", g / 3);
}