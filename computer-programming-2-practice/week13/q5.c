#include <stdio.h>

int main(void) {
    int x = 10;
    int *p = &x;
    int **pp = &p;

    printf("[x] 값: %d, 주소: %p\n", x, &x);
    printf("[p] 값 (x의 주소): %p, 주소: %p\n", p, &p);
    printf("[pp] 값 (p의 주소): %p, 주소: %p\n\n", pp, &pp);

    printf("x = %d (변수로 직접 접근)\n", x);
    printf("*p = %d (p를 한 번 따라가면 x)\n", *p);
    printf("**pp = %d (pp를 두 번 따라가면 x)\n\n", **pp);

    **pp = 20;
    printf("변경 후 x = %d\n", x);

    return 0;    
}