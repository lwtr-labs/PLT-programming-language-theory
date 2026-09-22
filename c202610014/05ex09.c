// 예제 #9. 실수의 비교

#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b;
    a = (0.3 * 3) + 0.1;
    b = 1;

    printf("a==b의 결과: %d\n", a==b);
    printf("fabs(a-b)의 결과: %.20f\n", fabs(a-b));
    printf("fabs(a-b)<0.00001의 결과: %d\n", fabs(a-b)<0.00001);

    return 0;
}