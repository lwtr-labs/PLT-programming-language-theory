#include <stdio.h>

int main(void) {
    int x=10, y=10;

    printf("x = %d\n", x);      // 10
    printf("++x = %d\n", ++x);  // 11
    printf("x = %d\n\n", x);    // 11

    printf("y = %d\n", y);      // 10
    printf("y++ = %d\n", y++);  // 10
    printf("y = %d\n", y);      // 11

    return 0;
}