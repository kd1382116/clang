#include<stdio.h>
int strcnt(char* p);
main()
{
	char buf[256];
	int mojisu;
	printf("文字列？");
	gets(buf);
	mojisu = strcnt(buf);
	printf("入力された文字列の文字数は%d文字です。\n", mojisu);
}

int strcnt(char* p)
{
	int cut;
	for (cut = 0; *p != '\0'; cut++, p++);
	return(cut);
}