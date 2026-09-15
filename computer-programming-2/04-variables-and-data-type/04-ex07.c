// 예제 #7. 실수형 크기와 정밀도

#include <stdio.h>

int main(void) {
    float x = 1.234567890123456789f;
    double y = 1.234567890123456789;

    printf("float 크기  = %d byte\n", (int)sizeof(float));
    printf("double 크기 = %d byte\n\n", (int)sizeof(double));

    printf("float  x = %.20f\n", x);
    printf("double y = %.20f\n", y);

    return 0;

    // float 크기  = 4 byte
    // double 크기 = 8 byte

    // float  x = 1.23456788063049316406 -> 소수점 아래  7자리까지
    // double y = 1.23456789012345669043 -> 소수점 아래 15자리까지
}