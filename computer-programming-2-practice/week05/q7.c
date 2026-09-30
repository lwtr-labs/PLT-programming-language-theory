#include <stdio.h>

int main(void) {
    int number, abs;

    printf("정수 1개 입력: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("양수입니다.\n");
        abs = number;
    } else {
        printf("음수입니다.\n");
        abs = -number;
    }

    printf("절댓값은 %d입니다.", abs);

    return 0;
}