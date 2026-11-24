#include <stdio.h>

int main(void) {
    int a[2][3] = { { 10, 20, 30 }, 
                    { 40, 50, 60 } };
    int (*p)[3] = a; // 열이 3개인 배열을 가리키는 포인터

    printf("a[0][1] = %d\n", a[0][1]);
    printf("p[0][1] = %d\n", p[0][1]);
    printf("*(*(p + 1) + 2) = %d\n", *(*(p + 1) + 2));

    return 0;
}