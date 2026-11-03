/**
 * 예제 06 배열 초기화-3
 */
#include <stdio.h>
#define SIZE 5

int main(void) {
    int scores[SIZE];

    for (int i = 0; i < SIZE; i++)
        printf("scores[%d] = %d\n", i, scores[i]);
    return 0;
}