#include<stdio.h>
int strcnt(char* p);
main()
{
	char buf[256];
	int mojisu;
	printf("������H");
	gets(buf);
	mojisu = strcnt(buf);
	printf("���͂��ꂽ������̕�������%d�����ł��B\n", mojisu);
}

int strcnt(char* p)
{
	int cut;
	for (cut = 0; *p != '\0'; cut++, p++);
	return(cut);
}