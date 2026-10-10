// 예제 #21. goto로 중첩 반복문 한번에 종료하기

#include <stdio.h>

int main(void) {
    for (int y = 1; y < 11; y++) {
        for (int x = 1; x < 11; x++) {
            if (x * y == 10)
                goto OUT;
            printf("(%d, %d)\n", x, y);
        }
    }

OUT:
    printf("반복을 종료합니다.\n");

    return 0;
}