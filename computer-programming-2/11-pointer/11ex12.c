// Swap-CBV

#include <stdio.h>
void swap(int x, int y);

int main(void) {
    int a = 100, b = 200;

    printf("swap 전(main): a = %d b = %d\n", a, b);
    swap(a, b);
    printf("swap 후(main): a = %d b = %d\n", a, b);

    return 0;
}

void swap(int x, int y) {
    int tmp;

    printf("swap 전(함수): x = %d y = %d\n", x, y);
    tmp = x;
    x = y;
    y = tmp;
    printf("swap 후(함수): x = %d y = %d\n", x, y);
}