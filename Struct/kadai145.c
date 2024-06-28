#include <stdio.h>

struct fruit {
    char name[30];
    int price;
    int point;
    int number;
    int total;
};

 main() {
     struct fruit ff[3] = { {"peach", 300, 5, 3, 0},
                             {"grape",200,4,10,0},
                {"watermelon",1500,5,8,0} };  // 構造体の初期化方法を修正
 // 合計金額を計算
    int i,a=0;
    for (i = 0; i < 3; i++) {
        ff[i].total = ff[i].price * ff[i].number;
        a += ff[i].total;
        printf("商品名：%s\n", ff[i].name);
        printf("商品価格：%d\n", ff[i].price);
        printf("おすすめ度:");
        for (int j = 0; j < ff[i].point; j++) {
            printf("★");
        }
        printf("\n個数：%d\n", ff[i].number);
        
        printf("金額：%d\n\n",ff[i].total);
        
    }
    printf("\n\n合計金額は%d", a);
}