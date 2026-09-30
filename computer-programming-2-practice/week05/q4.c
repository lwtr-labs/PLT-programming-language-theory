#include <stdio.h>

int main(void) {
    int x;

    printf("정수 1개를 입력하세요: ");
    scanf("%d", &x);

    (x % 2 == 0) ? printf("짝수\n") : printf("홀수\n");

    return 0;
}