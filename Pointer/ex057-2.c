#include<stdio.h>

main() {

	int tbl[][3] = { {10,20,30},
		{40,50,60},
		{70,80,90} };
	int* p_tbl, i;
	p_tbl = tbl[0];
	printf("‚QŽŸŒ³”z—ñ‚”‚‚‚Œ‚Ì“à—e\n");
	for (i = 0; i <( 3*3 ); i++) {
		if (i % 3 == 1) {
			printf(" %d", *p_tbl);
		}
		p_tbl ++;
	}
}