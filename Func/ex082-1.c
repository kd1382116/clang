#include <stdio.h>
#include <string.h>

// ��r�֐��F����
int compare_asc(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

// ��r�֐��F�~��
int compare_desc(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}

// ���ёւ��֐�
void sort_array(int arr[], int size, const char* order) {
    if (strcmp(order, "asc") == 0) {
        qsort(arr, size, sizeof(int), compare_asc);
    }
    else if (strcmp(order, "desc") == 0) {
        qsort(arr, size, sizeof(int), compare_desc);
    }
    else {
        printf("�����ȕ��ёւ��̏����ł��B\n");
    }
}

int main() {
    int data[] = { 6, 10, 8, 2, 9, 5, 1, 7 };
    int size = sizeof(data) / sizeof(data[0]);
    char order[10];

    printf("�������~��������͂��Ă��������iasc �܂��� desc�j: ");
    scanf("%9s", order);

    sort_array(data, size, order);

    printf("���ёւ���̔z��: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    return 0;
}