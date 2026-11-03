/**
 * 예제01. 배열 기초
 */

#include <stdio.h>
#define SIZE 5  // 수정 코드(2): 배열의 크기를 매크로 상수로 정의

int main(void) {
    int scores[5];  // 선언부

    // 기존 코드: 일일이 인덱스에 값을 수동으로 집어 넣음
    // scores[0] = 10;
    // scores[1] = 20;
    // scores[2] = 30;
    // scores[3] = 40;
    // scores[4] = 50;

    // for(int i = 0; i < 5; i++) {
    //     printf("scroes[%d] = %d\n", i, scores[i]);
    // }


    // 수정 코드(1): for 문에 값 저장과 출력을 동시에 진행
    // for(int i = 0; i < 5; i++) {
    //     scores[i] = (i + 1) * 10;
    //     printf("scores[%d] = %d\n", i, scores[i]);
    // }
    
    // 수정 코드(2): 배열의 크기가 달라지면 반복문의 반복 횟수도 바뀌게
    for (int i = 0; i < SIZE; i++) {
        scores[i] = (i + 1) * 10;
        printf("scores[%d] = %d\n", i, scores[i]);
    }

    return 0;
}
