// 예제 #1. 덧셈 프로그램.

/* 두개의 숫자와 합을 계산하는 프로그램 */
#include <stdio.h> // <- 전처리기

int main(void) { // <- 함수
    int x;      // 첫번째 정수를 저장할 변수
    int y;      // 두번쨰 정수를 저장할 변수
    int sum;    // 두 정수의 합을 저장하는 변수

    x = 100;
    y = 200;

    sum = x + y;
    printf("두 수의 합: %d", sum);

    return 0;
}