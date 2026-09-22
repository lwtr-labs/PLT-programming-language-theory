// 예제 #6. 대입연산자

#include <stdio.h>

int main(void) {
    int x, y;

    x = 1;

    printf("x+1 => %d\n", x + 1);   // x = 2
    printf("y =x+1 => %d\n", y=x+1);  // x = 3, y = 3
    printf("y=10+(x=2+7) => %d\n", y=10+(x=2+7));  // x = 9, y = 19
    printf("y=x=3 => %d\n", y=x=3); // x = 3, y = 3

    return 0;
}