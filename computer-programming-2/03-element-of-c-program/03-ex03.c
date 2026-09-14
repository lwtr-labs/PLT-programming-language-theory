// 예제 #3. 사용자 입력 덧셈 프로그램

// 사용자로부터 두 개의 정수를 입력 받아 덧셈을 계산한다.

#include <stdio.h>

int main(void) {
    int x;      // 첫번째 정수 저장
    int y;      // 두번째 정수 저장
    int sum;    // 두 정수의 합 저장

    printf("첫 번째 숫자: ");   // 입력 안내 메시지 출력
    scanf("%d", &x);    // 첫 번째 정수를 입력받아 x에 저장

    printf("두 번째 숫자: ");   // 입력 안내 메시지 출력
    scanf("%d", &y);    // 두 번째 정수를 입력받아 y에 저장

    sum = x + y;
    printf("두 수의 합: %d", sum);  // sum의 값을 10진수로 출력 d: 디시멀

    return 0;    
}