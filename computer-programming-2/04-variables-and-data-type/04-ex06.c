// 예제 #6. 오버플로우 (overflow)

#include <stdio.h>
#include <limits.h>

int main(void) {
    short s_money = SHRT_MAX;   // 32767
    unsigned short u_money = USHRT_MAX; // 65545

    s_money = s_money + 1;
    printf("s_money = %d\n", s_money);

    u_money = u_money + 1;
    printf("u_money = %d\n", u_money);

    return 0;

    // s_money = -32768
    // u_money = 0

    // 오버플로우같이 정상적으로 컴파일되며,
    // 실행되지만, 결과가 틀릴 때와 같은 오류를 
    // 논리 에러라고 한다.
}