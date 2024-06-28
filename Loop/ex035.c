#include<stdio.h>
main()
{
	int num, sum;
	sum = 0;
	while (1)
	//	–³ŒÀƒ‹[ƒv
	{
		printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", &num);
		if (num == -999) {
			break;
		}
		sum += num;
	}
	printf("‡Œv=%d\n", sum);
}