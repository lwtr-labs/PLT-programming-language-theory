#include <stdio.h.>

int main(void) {
    int x;
    int y;

    printf("양수, 음수를 하나씩 입력: ");
    scanf("%d", &x);
    scanf("%d", &y);

    printf("x     = %08X\n", x);
    printf("y     = %08X\n", y);
    printf("x + y = %08X\n", x + y);

    return 0;
}