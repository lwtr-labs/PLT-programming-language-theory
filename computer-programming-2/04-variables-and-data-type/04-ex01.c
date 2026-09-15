// 예제 #1. 자료형의 크기

// 자료형에 따라 사용하는 메모리의 크기가 다름
// sizeof 연산자로 변수나 자료형의 크기를 byte 단위로 확인 가능

#include <stdio.h>

int main(void) {
    int x;

    printf("변수 x 크기: %d\n", sizeof(x));
    printf("char형 크기: %d\n", sizeof(char));
    printf("int형 크기: %d\n", sizeof(int));
    printf("short형 크기: %d\n", sizeof(short));
    printf("float형 크기: %d\n", sizeof(float));
    printf("double형 크기: %d\n", sizeof(double));

    return 0;

    // 변수 x 크기: 4
    // char형 크기: 1
    // int형 크기: 4
    // short형 크기: 2
    // float형 크기: 4
    // double형 크기: 8
}