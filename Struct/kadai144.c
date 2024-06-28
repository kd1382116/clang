#include <stdio.h>

struct fruit {
    char name[30];
    int price;
    int point;
    int number;
    int total;
};


 main() {
    struct fruit ff = { "peach", 300, 5, 3, 0 }; // 構造体の初期化方法を修正
    struct fruit* p;
        
    ff.total = ff.price * ff.number;  // 合計金額を計算
    p = &ff;
    printf("商品名：%s\n", p->name);
    printf("商品価格：%d\n", p->price);
    printf("おすすめ度:");
    for (int i = 0; i < ff.point; i++) {
        printf("★");
    }
    printf("\n個数：%d\n", p->number);
    printf("金額：%d\n", p->total);

   
}