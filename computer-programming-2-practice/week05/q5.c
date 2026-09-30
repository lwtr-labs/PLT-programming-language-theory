#include <stdio.h>

int main(void) {
    int x;


    printf("0부터 255 사이의 정수를 입력하세요: ");
    scanf("%d", &x);

    printf("2진수: ");
    printf("%d", (x & 128) ? 1 : 0);
    printf("%d", (x & 64)  ? 1 : 0);
    printf("%d", (x & 32)  ? 1 : 0);
    printf("%d", (x & 16)  ? 1 : 0);
    printf("%d", (x & 8)   ? 1 : 0);
    printf("%d", (x & 4)   ? 1 : 0);
    printf("%d", (x & 2)   ? 1 : 0);
    printf("%d\n", (x & 1) ? 1 : 0);

    return 0;
}