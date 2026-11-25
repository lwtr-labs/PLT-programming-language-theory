#include <stdio.h>
#include <stdlib.h>     // rand(), srand() 사용
#include <time.h>       // time() 사용

// 1부터 6까지의 난수를 반환
int roll(void) {
    return rand() % 6 + 1;
}

int main(void) {
    srand(((unsigned) time(NULL))); // 현재 시각을 시드로 설정

    // 주사위를 5번 던져 결과를 출력
    for (int i = 0; i < 5; i++)
        printf("%d ", roll());  // 주사위 함수 호출

    printf("\n");
    return 0;
}