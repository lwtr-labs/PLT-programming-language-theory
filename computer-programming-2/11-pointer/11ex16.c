#include <stdio.h>
#define SIZE 5
int *find_value(int a[], int n, int key, int *idx);   // 포인터를 반환하는 함수

int main(void) {
    int data[SIZE] = { 10, 20, 30, 40, 50 };
    int idx;
    int *p = find_value(data, SIZE, 30, &idx);


    if (p != NULL) {
        printf("찾은 값: data[%d] = %d\n", idx, *p);
        *p = 100;
        printf("변경 후: data[%d] = %d\n", idx, data[2]);
    }
    else printf("값을 찾지 못했습니다.\n");
    return 0;
}

int *find_value(int a[], int n, int key, int *idx) {
    for (int i = 0; i < n; i++)
        if (a[i] == key) {
            *idx = i;
            return &a[i];
        } 

    return NULL;
}