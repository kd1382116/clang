#include <stdio.h>

 main() {
    int jisCode;

    while (1) {
        // ユーザーにJISコードの入力を促す
        printf("文字コードを入力してください（終了するには-1を入力）：");
        scanf("%d", &jisCode);

        // 入力が-1の場合、ループを抜けて終了する
        if (jisCode == -1) {
            break;
        }

        // JISコードが有効な範囲にあるか確認する
        if (jisCode >= 0 && jisCode <= 255) {
            // JISコードを文字に変換して表示
            printf("対応する文字：%c\n", (char)jisCode);
        }
        else {
            // 無効なJISコードの場合、エラーメッセージを表示
            printf("無効なJISコードです。0から255の範囲内で入力してください。\n");
        }
    }

    // プログラム終了メッセージ
    printf("プログラムを終了します。\n");

    
}