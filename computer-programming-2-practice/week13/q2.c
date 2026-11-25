#include <stdio.h>
#define SIZE 5
int *find_value(int a[], int n, int key);

int main(void) {
    int data[SIZE] = { 10, 20, 30, 40, 50 };
    int key;

    printf("찾을 값을 입력하세요: ");
    scanf("%d", &key);

    int *p = find_value(data, SIZE, key);

    if (p != NULL) {
        int index = p - data;
        printf("찾은 값: %d (인덱스: %d)\n", *p, index);
        *p = 100;
        printf("변경 후 data[%d]: %d\n", index, data[index]);
    }
    else printf("값을 찾지 못했습니다.\n");
    return 0;
}

int *find_value(int a[], int n, int key) {
    for (int i = 0; i < n; i++)
        if (a[i] == key) return &a[i];
    
    return NULL;
}