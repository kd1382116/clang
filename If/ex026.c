#include<stdio.h>
main()
{
	int s;

	printf("月を入力　：　\n");

	scanf("%d", &s);

	if (s ==2){
		printf("最終日は２８日です\n");

	}
	else {
		if (s == 4 || s == 6 || s == 9 || s == 11) {
			printf("最終日は３０日です\n");
		}
		else
		{
			printf("最終日は３１日です\n");

		}
	}	
}