#include <stdio.h>
#include <string.h>

// 比較関数：昇順
int compare_asc(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

// 比較関数：降順
int compare_desc(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}

// 並び替え関数
void sort_array(int arr[], int size, const char* order) {
    if (strcmp(order, "asc") == 0) {
        qsort(arr, size, sizeof(int), compare_asc);
    }
    else if (strcmp(order, "desc") == 0) {
        qsort(arr, size, sizeof(int), compare_desc);
    }
    else {
        printf("無効な並び替えの順序です。\n");
    }
}

int main() {
    int data[] = { 6, 10, 8, 2, 9, 5, 1, 7 };
    int size = sizeof(data) / sizeof(data[0]);
    char order[10];

    printf("昇順か降順かを入力してください（asc または desc）: ");
    scanf("%9s", order);

    sort_array(data, size, order);

    printf("並び替え後の配列: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    return 0;
}