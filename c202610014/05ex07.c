// 예제 #7. 복합 대입 연산자 

#include <stdio.h>

int main(void) {
    int x = 10, y = 10, z = 33;

    x += 1; // x = x + 1;, 11
    y *= 2; // y = y * 2;, 20
    z %= 10 + 20; // z = z % (10 + 20);, 3

    printf("x = %d\ty = %d\tz = %d\n", x, y, z);

    return 0;
}