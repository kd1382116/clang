#include<stdio.h>
int strcnt(char* p);
main()
{
	char buf[256];
	int mojisu;
	printf("•¶š—ñH");
	gets(buf);
	mojisu = strcnt(buf);
	printf("“ü—Í‚³‚ê‚½•¶š—ñ‚Ì•¶š”‚Í%d•¶š‚Å‚·B\n", mojisu);
}

int strcnt(char* p)
{
	int cut;
	for (cut = 0; *p != '\0'; cut++, p++);
	return(cut);
}