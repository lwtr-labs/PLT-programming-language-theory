// 함수의 매개변수

/**
 * C에서는 인수의 값이 매개변수에 복사됨
 * 따라서, 함수 안에서 매개변수의 값을 변경해도
 * 호출한 쪽의 변수는 바뀌지 않음
 * -> 값에 의한 호출(Call By Value: CBV)
 */

#include <stdio.h>

void inc(int counter) {
    counter++;
}

int main(void) {
    int i = 10;

    printf("함수 호출 전 i = %d\n", i);
    inc(i);
    printf("함수 호출 전 i = %d\n", i);

    return 0;
}