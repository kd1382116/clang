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
                {"watermelon",1500,5,8,0} }; // 構造体の初期化方法を修正
     struct fruit* p;
     p = ff;
    int i,a=0;
    for (i = 0; i < 3; i++) {
        (p + i)->total = (p+i)->price * (p + i)->number;
        a += (p + 1)->total;
        printf("商品名：%s\n", (p + i)->name);
        printf("商品価格：%d\n", (p + i)->price);
        printf("おすすめ度:%d\n", (p + i)->point);
        
        printf("\n個数：%d\n", (p + i)->number);
        
        printf("金額：%d\n\n", (p + i)->total);
        
    }
    printf("\n\n合計金額は%d", a);
}