/**
 * 예제 05 배열 초기화-2
 */
#include <stdio.h>
#define SIZE 5

int main(void) {
    int scores[SIZE] = { 31, 63 };

    for (int i = 0; i < SIZE; i++)
        printf("scores[%d] = %d\n", i, scores[i]);
    return 0;
}