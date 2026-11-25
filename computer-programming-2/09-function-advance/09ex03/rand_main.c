// rand_main.c
#include <stdio.h>

// 다른 소스 파일에 정의된 변수와 함수 참조
extern unsigned random_i(void);
extern double random_f(void);
extern int MOD;

int main(void) {
    MOD = 32727;    // 난수 생성 범위 변경

    // 0부터 99까지 정수 난수 10개 출력
    for (int i = 0; i < 10; i++)
        printf("random(%d) = %u\n", i, random_i() % 100);
    
    // 0.0 이상 1.0 미만의 실수 난수 10개 출력
    for (int i = 0; i < 10; i++) 
        printf("random(%d) = %f\n", i, random_f());

    return 0;
}