#include <stdio.h>
#include <string.h>
void reverse_string(const char str1[], char str2[]);
 main() {
    char str1[100], str2[100];

    // ユーザーから文字列の入力を促す
    printf("文字列？ ");
    gets(str1);
    // 文字列を逆順にする関数を呼び出す
    reverse_string(str1, str2);

    // 逆順の文字列を表示
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    
}
// 文字列を逆順にする関数
void reverse_string(const char str1[], char str2[]) {
    int length = strlen(str1);
    for (int i = 0; i < length; i++) {
        str2[i] = str1[length - 1 - i];
    }
    str2[length] = '\0'; // 文字列の終端を追加
}
