#include <stdio.h>
#include <math.h>
#define ERROR 0.000001

int main(void) {
    double a, b;
    a = (0.3 * 3) + 0.1;
    b = 1;
    printf("-- 작은 값 비교 --\n");
    printf("a==b의 결과: %d\n", a == b);
    printf("절대오차: %.20f\n", fabs(a - b));
    printf("절대오차 < ERROR: %d\n", fabs(a - b) < ERROR);

    a = 1000000.1;
    b = 1000000.0;
    printf("\n-- 큰 값 비교 --\n");
    printf("절대오차: %.20f\n", fabs(a-b));
    printf("절대오차 < ERROR: %d\n", fabs(a - b) < ERROR);
    printf("상대오차: %.20f\n", fabs(a - b) / fabs(b));
    printf("상대오차 < ERROR: %d\n", fabs(a-b) / fabs(b) < ERROR);

    return 0;
}