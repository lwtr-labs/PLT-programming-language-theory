// 예제 #2. 절댓값 구하기

#include <stdio.h>

int main(void) {
    int number;

    printf("정수 1개 입력: ");
    scanf("%d", &number);

    if (number < 0)
        number = -number;

    printf("절댓값은 %d입니다.\n", number);

    return 0;
}