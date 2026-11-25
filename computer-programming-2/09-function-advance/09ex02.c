#include <stdio.h>
int x = 50; // 전역 변수

int main(void) {
    int x = 100;    // 지역 변수

    {
        extern int x;   // 연결은 전역 변수만 가능하기 때문에
        printf("x = %d\n", x);  // 50이 출력됨
                                // extern이 없다면
                                // 변수 가림(shadowing)
                                // 현상으로 100이 출려됨
    }

    return 0;
}