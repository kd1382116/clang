#include<stdio.h>
main()
{
	int n,i,s;

	printf("�����́H");
	scanf("%d", &n);
	s = 0, i = 0;
	for (; n != -999; ) {
		s += n;
		printf("�����́H");
		scanf("%d", &	n);
		i++;
	}
	printf("���v�́�%d\t ���ρ�%.2f\n", s, (float)s / i);
}