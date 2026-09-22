#include <stdio.h>

int main(void)
{
    // int x = 1, y = 1;

    // y = (1 + x++) + 10;
    // //x++는 현재 값을 수식에 사용 후 x의 값을 1 증가.

    // printf("%d %d", x, y);

    int x = 10, y = 10;

    printf("x \t=> %d\n", x); // 10
    printf("++x \t=> %d\n", ++x); // 11
    printf("x \t=> %d\n\n", x); // 11

    printf("y \t=> %d\n", y); // 10
    printf("y++ \t=> %d\n", y++); // 10
    printf("y \t=> %d", y);   // 11
    
    return 0;
}