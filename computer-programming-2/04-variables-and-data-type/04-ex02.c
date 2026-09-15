// 예제 #2. 정수 자료형의 표현 범위 확인

#include <stdio.h>
#include <limits.h> // limits.h에 자료형의 최소, 최대값이 정의되어 있음

int main(void) {
    printf("short : %d ~ %d\n", SHRT_MIN, SHRT_MAX);
    printf("int   : %d ~ %d\n", INT_MIN, INT_MAX);
    printf("long  : %d ~ %d\n", LONG_MIN, LONG_MAX);

    return 0;
    // short : -32768 ~ 32767
    // int   : -2147483648 ~ 2147483647
    // long  : -2147483648 ~ 2147483647    
}