// 포인터의 간접 참조

#include <stdio.h>

int main(void) {
    int i = 3000;
    int *p = NULL;
    p = &i;

    printf("i = %d\n", i);      // 변수의 값 출력
    printf("&i = %p\n\n", &i);  // 변수의 주소 출력

    printf("p = %p\n", p);      // 포인터의 값 출력
    printf("*p = %d\n", *p);     // 포인터를 통한 간접 참조 값 출력

    return 0;
}