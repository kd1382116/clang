#include<stdio.h>
main()
{
	int n,i,s;

	printf("”š‚ÍH");
	scanf("%d", &n);
	s = 0, i = 0;
	for (; n != -999; ) {
		s += n;
		printf("”š‚ÍH");
		scanf("%d", &	n);
		i++;
	}
	printf("‡Œv‚Í%d\t •½‹Ï%.2f\n", s, (float)s / i);
}