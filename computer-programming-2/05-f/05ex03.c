// 예제 #3. 나머지 연산자

#include <stdio.h>
#define SEC_PER_MINUTE 60

int main(void) {
    int input, minute, second;

    printf("변환할 시간 입력(초 단위, 21억 이하): ");
    // 21억 <- int형의 최대 양의 정수 표현 가능 값
    // unsigned로 정의하면 약 42억까지 확장 가능
    scanf("%d", &input);

    minute = input / SEC_PER_MINUTE;
    second = input % SEC_PER_MINUTE;

    printf("%d초 = %d분 %d초\n", input, minute, second);
    return 0;
}