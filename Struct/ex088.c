#include<Stdio.h>
#include<string.h>
struct syohin_data {
	char neme[20];
	int tanka;
};
main() {
	struct syohin_data syouhin1, syouhin2;
	strcpy(syouhin1.neme, "ƒGƒ“ƒsƒc");
	syouhin1.tanka = 30;
	syouhin2 = syouhin1;
	printf("syouhin1.neme=%s\n", syouhin1.neme);
	printf("syouhin1.tanka=%d\n", syouhin1.tanka);
	printf("syouhin2.neme=%s\n", syouhin2.neme);
	printf("syouhin2.tanka=%d\n", syouhin2.tanka);
}