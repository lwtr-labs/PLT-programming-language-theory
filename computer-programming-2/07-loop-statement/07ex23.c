// 예제 #23. 원주율 PI 계산하기
// 그레고리-라이프니츠
#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int main(void) {
    double divisor = 1.0;
    double diviend = 4.0;
    double sum = 0.0;
    int loop_count;
    int i;

    printf("반복횟수: ");
    scanf("%d", &i);
    loop_count = i;

    while (i > 0) {
        sum += diviend / divisor;
        diviend = -diviend;
        divisor += 2.0;
        i--;
    }
    
    printf("반복 횟수 : %d\n", loop_count);
    printf("계산 결과 : %.15f\n", sum);
    printf("실제 파이 : %.15f\n", PI);
    printf("오차      : %.15f\n", fabs(PI-sum));

    return 0;
}