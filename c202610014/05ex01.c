// 예제#1. 정수 사칙연산

#include <stdio.h>

int main(void)
{
    int x, y, result;

    printf("정수 2개를 입력하세요: ");
    scanf("%d %d", &x, &y);

    result = x + y; // 덧셈
    printf("%d + %d = %d\n", x, y, result);

    result = x - y; // 뺼셈, 변수 result 재사용
    printf("%d - %d = %d\n", x, y, result);

    result = x * y; // 곱셈, 변수 result 재사용
    printf("%d * %d = %d\n", x, y, result);

    result = x / y; // 나눗셈, 변수 result 재사용
    printf("%d / %d = %d\n", x, y, result);

    result = x % y; // 나머지, 변수 result 재사용 
    printf("%d %% %d = %d\n", x, y, result);    // %% <- % 출력

    return 0;
}