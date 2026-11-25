// 가변 인자

#include <stdio.h>
#include <stdarg.h>     // 가변 인자 처리 함수 제공

int sum(int num, ...);  // 가변 인자를 받는 함수 선언

int main(void) {
    int answer = sum(4, 4, 3, 2, 1);    // 4개의 정수를 전달
    printf("합은 %d입니다.\n", answer);

    return 0;
}

int sum(int num, ...) { // 변수 num이 매개변수의 개수를 담는다
    int answer = 0;
    va_list argptr;     // 가변 인자 목록을 처리할 변수

    va_start(argptr, num);  // num 다음 인자부터 접근 준비

    for (int i = 0; i < num; i++) {
        answer += va_arg(argptr, int);  // 다음 정수를 읽어 합산
    }

    va_end(argptr); // 가변 인자 처리 종료

    return answer;  // 계산 결과 반환
}