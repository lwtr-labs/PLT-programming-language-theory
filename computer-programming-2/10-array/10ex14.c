#include <stdio.h>
#define SIZE 16
int binary_search(int list[], int n, int key);

int main(void) {
    int grade[SIZE] = { 2,  6, 11, 13, 18, 20, 22, 27, 
                       29, 30, 34, 38, 41, 42, 45, 47 };
    int key, result;
    printf("탐색할 값 입력: ");
    scanf("%d", &key);

    result = binary_search(grade, SIZE, key);
    printf("탐색 결과(인덱스): %d\n", result);
    return 0;
}

int binary_search(int list[], int n, int key) {
    int low = 0, high = n - 1;
    int mid = n / 2;

    while (low <= high) {
        if (list[mid] > key) {
            high = mid - 1;
            mid = (low + high) / 2;
        } else if (list[mid] < key) {
            low = mid + 1;
            mid = (low + high) / 2;
        } else {
            return mid;
        }
    }

    return -1;
}