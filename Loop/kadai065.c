#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    int count = 0;

    do {
        printf("�����i�I���R�[�h�F-999�j�F");
        scanf("%d", &num);

        if (num != -999) {
            sum += num;
            count++;
        }
    } while (num != -999);

    if (count > 0) {
        double average = (double)sum / count;
        printf("���v�F%d\n", sum);
        printf("���ρF%.2f\n", average);
    }
    else {
        printf("���͂��ꂽ����������܂���B\n");
    }

    return 0;
}