#include <stdio.h>

int main(void) {
    int i = 10;
    int *p;

    p = &i;     // 변수 i의 주소 저장
    printf("i = %d\n", i);

    *p = 20;    // 포인터를 통해 i의 값 변경
    printf("i = %d\n", i);

    return 0;
}