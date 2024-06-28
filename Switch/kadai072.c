#include<stdio.h>
main()
{
	char a;
	printf("アルファベット？");
	scanf("%c",&a);
	switch (a){
	case'a':printf("America\n");
		printf("Australia");
		break;
	case'e':printf("England");
		break;
	case'f':printf("France");
		break;
	case'j':printf("Japan");
		break;
	default:printf("見つかりません");
		break;
	}

}