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
                {"watermelon",1500,5,8,0} };  // �\���̂̏��������@���C��
 // ���v���z���v�Z
    int i,a=0;
    for (i = 0; i < 3; i++) {
        ff[i].total = ff[i].price * ff[i].number;
        a += ff[i].total;
        printf("���i���F%s\n", ff[i].name);
        printf("���i���i�F%d\n", ff[i].price);
        printf("�������ߓx:");
        for (int j = 0; j < ff[i].point; j++) {
            printf("��");
        }
        printf("\n���F%d\n", ff[i].number);
        
        printf("���z�F%d\n\n",ff[i].total);
        
    }
    printf("\n\n���v���z��%d", a);
}