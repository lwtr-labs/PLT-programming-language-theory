/**
 * 예제 07 주사위 던지기
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 6

int main(void) {
    int freq[SIZE] = { 0 }; // 각 면의 빈도를 0으로
    int i;

    for (i = 0; i < 10000; i++)  // 주사위 10000번 던지기
        ++freq[rand()%6];   // freq[rand()%6] = freq[rand()%6] + 1 

    printf("===============\n");
    printf("  면     빈도\n");
    printf("===============\n");

    for (i = 0; i < SIZE; i++)
        printf("%3d     %5d \n", i, freq[i]);

    return 0;    
}