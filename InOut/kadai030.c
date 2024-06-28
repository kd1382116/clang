#include<stdio.h>
main()
{
	float a, b;
	printf("“ñ‚Â‚ÌÀ”‚ÍH");
	scanf("%f%f", &a, &b);

	if (a < b) {
		printf("‘å‚«‚¢‚Ù‚¤‚Í%.6f", b);
	}
	else {
		printf("‘å‚«‚¢‚Ù‚¤‚Í%.6f", a);
	}
}