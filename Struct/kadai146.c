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
                {"watermelon",1500,5,8,0} }; // �\���̂̏��������@���C��
     struct fruit* p;
     p = ff;
    int i,a=0;
    for (i = 0; i < 3; i++) {
        (p + i)->total = (p+i)->price * (p + i)->number;
        a += (p + 1)->total;
        printf("���i���F%s\n", (p + i)->name);
        printf("���i���i�F%d\n", (p + i)->price);
        printf("�������ߓx:%d\n", (p + i)->point);
        
        printf("\n���F%d\n", (p + i)->number);
        
        printf("���z�F%d\n\n", (p + i)->total);
        
    }
    printf("\n\n���v���z��%d", a);
}