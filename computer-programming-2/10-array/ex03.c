/**
 * 예제 03 성적 평균 계산하기
 */

#include <stdio.h>
#define STUDENT 5

int main(void) {
    int scores[STUDENT];
    int sum = 0;
    int i; // 수정: average(int -> double)
    double average;

    // 입력 반복문 (입력부)
    for (i = 0; i < STUDENT; i++) {
        printf("성적을 입력하세요: ");
        scanf("%d", &scores[i]);
    }

    // 누적합 반복문
    for (i = 0; i < STUDENT; i++)
        sum += scores[i];
        
    average = sum / STUDENT;
    printf("평균: %.2f\n", average);  // 수정 %d -> %.2f

    return 0;
}