#include <stdio.h>
#define SIZE 10

int main(void) {
    int list[SIZE] = {3, 2, 9, 7, 1, 4, 8, 0, 6, 5};
    int temp, least;

    printf("정렬 전: ");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", list[i]);
    printf("\n");

    // 선택 정렬
    for (int i = 0; i < SIZE - 1; i++) {
        least = i;  // 현재 위치를 최솟값 위치로 가정

        for (int j = i + 1; j < SIZE; j++)
            if (list[j] < list[least])
                least = j;  // 최솟값 인덱스 갱신

        // 현재 요소와 최솟값 교환
        temp = list[i];
        list[i] = list[least];
        list[least] = temp;
    }
    printf("정렬 후: ");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", list[i]);
    printf("\n");

    return 0;
}