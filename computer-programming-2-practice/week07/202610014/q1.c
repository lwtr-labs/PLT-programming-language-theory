#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

double calculate_pi(int loop_count) {
    double divisor = 1.0;
    double dividend = 4.0;
    double sum = 0.0;    
    int i = loop_count;

    while (i > 0) {
        sum += dividend / divisor;
        dividend = -dividend;
        divisor += 2.0;
        i--;
    }

    return sum;
}

int main(void) {
    double sum;
    int loop_count;

    printf("반복횟수: ");
    scanf("%d", &loop_count);

    sum = calculate_pi(loop_count);

    printf("반복 횟수 : %d\n", loop_count);
    printf("계산 결과 : %.15f\n", sum);
    printf("실제 파이 : %.15f\n", PI);
    printf("오차      : %.15f\n", fabs(PI-sum));

    return 0;
}