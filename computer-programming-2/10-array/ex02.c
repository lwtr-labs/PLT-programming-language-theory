/**
 * 예제02. 난수로 배열 채우기
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>   // 수정 코드: rand의 시드 값을 실행 시간으로 설정

#define SIZE 5

int main(void) {
    int i;
    int scores[SIZE];

    srand((unsigned)time(NULL));    // 시드: 실행 후, 현재 시간

    // // 처리 반복문
    // for (i = 0; i < SIZE; i++)
    //     scores[i] = rand() % 100;

    // // 출력 반복문 -> 자주 쓰면 함수로 구현
    // for (i = 0; i < SIZE; i++)
    //     printf("scores[%d] = %d\n", i, scores[i]);

    
    // 수정코드: 처리와 반복을 하나의 반복문 안에서
    for (i = 0; i < SIZE; i++) {
        scores[i] = rand() % 100;
        printf("scores[%d] = %d\n", i, scores[i]);
    }
    
    
    return 0;
}