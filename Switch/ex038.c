#include<stdio.h>
main()
{
	int a;
	printf("整数を入力：");
	scanf("%d", &a);
	if(10<=a&&49>=a){
		switch (a/10)
		{
		case 1:printf("１０点台です\n");
			break;
		case 2:printf("２０点台です\n");
			break;
		case 3:printf("３０点台です\n");
			break;
		case 4:printf("４０点台です\n");
			break;
		}
	}
	else {
		printf("エラー：10〜49の範囲で入力してください\n");
	}
}