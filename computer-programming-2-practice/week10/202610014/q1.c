#include <stdio.h>
#define SIZE 10

int main(void) {
    int scores[SIZE];

    for (int i = 0; i < SIZE; i++)  // 초기기 할당
        scores[i] = (i + 1) * 100;
    
    for (int i = 0; i < SIZE; i++)
        printf("scores[%d] = %d\n", i, scores[i]);
    return 0;
}