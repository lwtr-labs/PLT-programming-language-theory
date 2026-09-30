#include <stdio.h>

int main(void) {
    int x, y;

    printf("정수 2개 입력하세요: ");
    scanf("%d %d", &x, &y);

    printf("\n------------------------------\n");
    printf(" x   y   x&&y   x||y   !x   !y\n");
    printf("------------------------------\n");

    printf("%2d  %2d  %5d  %5d  %3d  %3d\n", x, y, x && y, x || y, !x, !y);

    return 0;
}