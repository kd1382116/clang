#include <stdio.h>
#include <string.h>

// ”äŠrŠÖ”F¸‡
int compare_asc(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

// ”äŠrŠÖ”F~‡
int compare_desc(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}

// •À‚Ñ‘Ö‚¦ŠÖ”
void sort_array(int arr[], int size, const char* order) {
    if (strcmp(order, "asc") == 0) {
        qsort(arr, size, sizeof(int), compare_asc);
    }
    else if (strcmp(order, "desc") == 0) {
        qsort(arr, size, sizeof(int), compare_desc);
    }
    else {
        printf("–³Œø‚È•À‚Ñ‘Ö‚¦‚Ì‡˜‚Å‚·B\n");
    }
}

int main() {
    int data[] = { 6, 10, 8, 2, 9, 5, 1, 7 };
    int size = sizeof(data) / sizeof(data[0]);
    char order[10];

    printf("¸‡‚©~‡‚©‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢iasc ‚Ü‚½‚Í descj: ");
    scanf("%9s", order);

    sort_array(data, size, order);

    printf("•À‚Ñ‘Ö‚¦Œã‚Ì”z—ñ: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    return 0;
}