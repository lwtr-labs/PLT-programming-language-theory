#include <stdio.h>
#define SIZE 16

int binary_search(int list[], int n, int key);

int main(void) {
    int grade[SIZE] = { 2, 6, 11, 13, 18, 20, 22, 27, 
                        29, 30, 34, 38, 41, 42, 45, 47 };
    int key, result;
    printf("탐색할 값 입력: ");
    scanf("%d", &key);

    result = binary_search(grade, SIZE, key);
    if (result == -1)
        printf("해당 데이터가 존재하지 않습니다.\n");
    else
        printf("탐색 결과(인덱스): %d\n", result);
    return 0;
}

int binary_search(int list[], int n, int key) {
    int low = 0, high = n - 1;
    int middle;

    while (low <= high) {
        printf("탐색 범위: [%d, %d]\n", low, high);
        middle = (low + high) / 2;

        if (key == list[middle])
            return middle;
        else if (key > list[middle])
            low = middle + 1;
        else 
            high = middle - 1;
    }
    return -1;
}