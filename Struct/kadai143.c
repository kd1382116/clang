#include <stdio.h>

struct fruit {
    char name[30];
    int price;
    int point;
    int number;
    int total;
};

 main() {
    struct fruit ff = { "peach", 300, 5, 3, 0 };  // �\���̂̏��������@���C��
    ff.total = ff.price * ff.number;  // ���v���z���v�Z

    printf("���i���F%s\n", ff.name);
    printf("���i���i�F%d\n", ff.price);
    printf("�������ߓx:");
    for (int i = 0; i < ff.point; i++) {
        printf("��");
    }
    printf("\n���F%d\n", ff.number);
    printf("���z�F%d\n", ff.total);

   
}