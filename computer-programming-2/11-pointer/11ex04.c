// 포인터 응용-1

#include <stdio.h>

int main(void) {
    int x = 10, y = 20;
    int *p;

    p = &x;
    printf("--- x 연결 ---\n");
    printf("p = %p\n", p);
    printf("*p = %d\n\n", *p);

    p = &y;
    printf("--- y 연결 ---\n");
    printf("p = %p\n", p);
    printf("*p = %d\n\n", *p);

    return 0;
}