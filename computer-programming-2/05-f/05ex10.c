// 예제 #10. 논리 연산자

#include <stdio.h>

int main(void) {
    int x, y;

    printf("정수 2개 입력: ");
    scanf("%d %d", &x, &y);

    printf("%d && %d의 결과: %d\n", x, y, x && y);
    printf("%d || %d의 결과: %d\n", x, y, x || y);
    printf("!%d의 결과: %d\n", x, !x);

    return 0;
}