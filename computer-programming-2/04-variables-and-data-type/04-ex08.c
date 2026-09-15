// 예제 #8. 부동소수점의 한계

#include <stdio.h>

int main(void) {
    float large = 1e39f;            // float 최대 범위를 넘어 overflow
    float small1 = 1.23456e-38f;    // 정상적으로 표현 가능
    float small2 = 1.23456e-40f;    // 정밀도가 낮아진 값으로 표현
    float small3 = 1.23456e-46f;    // 너무 작아 0으로 표현

    double result = (1.0e20 + 5.0) - 1.0e20;    // 5가 정밀도 한계로 사라짐

    printf("large  = %e\n", large);
    printf("small1 = %e\n", small1);
    printf("small2 = %e\n", small2);
    printf("small3 = %e\n\n", small3);

    printf("result = %f\n", result);

    // large  = inf <- 이거
    // small1 = 1.234560e-38
    // small2 = 1.234558e-40 <- 이거
    // small3 = 0.000000e+00 <- 이거

    // result = 0.000000     <- 이거
}