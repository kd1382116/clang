#include<stdio.h>
main()
{
	char a[100], b[100], c[100];
	int i = 0, j = 0;
	printf("文字列１？");
	scanf("%s", a);
	printf("文字列２？");
	scanf("%s", b);
	i = 0;
	while (a[i] != '\0') {
		i++;
	}
	while (b[j] != '\0') {
		a[i] = b[j];
		i++;
		j++;
	}
	a[i] = '\0'; // 最後にヌル文字を追加

	// 結果を表示
	printf("結合された文字列: %s\n", a);
}