// 예제 #2. 실수의 사칙연산

// 나눗셈을 조심할 것!
// 피연산자 중 하나라도 실수면 실수 연산으로 수행

#include <stdio.h>

int main(void) {
    double x, y, result;

    printf("실수 2개를 입력하세요: ");
    scanf("%lf %lf", &x, &y);

    result = x + y;
    printf("%lf + %lf = %lf\n", x, y, result);

    result = x - y;
    printf("%lf - %lf = %lf\n", x, y, result);

    result = x * y;
    printf("%lf * %lf = %lf\n", x, y, result);

    result = x / y;
    printf("%lf / %lf = %lf\n", x, y, result);

    return 0;
}