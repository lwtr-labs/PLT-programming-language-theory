#include <stdio.h>

int main(void) {
    int x = 9;      // 2진수: 00001001
    int y = 10;     // 2진수: 00001010

    printf("x & y = %d\n", x & y);  // 00001000 -> 8
    printf("x | y = %d\n", x | y);  // 00001011 -> 11 
    printf("x ^ y = %d\n", x ^ y);  // 00000011 -> 3
    printf("~%d = %d", x, ~x);      // 모든 비트 반전: -10 (1 더하여 보수로 만들기 전단계)

    return 0;
}