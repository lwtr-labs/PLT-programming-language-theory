#include <stdio.h>
#include <math.h>

int main(void) {
    printf("sqrt: %.1f\n", sqrt(25.0));     // 제곱근
    printf("pow : %.1f\n", pow(2.0, 4.0));  // 거듭제곱
    printf("ceil: %.1f\n", ceil(2.3));      // 올림    
    printf("fabs: %.1f\n", fabs(-3.5));     // 실수 절댓값

    return 0;
}