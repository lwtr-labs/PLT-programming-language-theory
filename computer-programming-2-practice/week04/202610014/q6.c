#include <stdio.h>

int main(void) {
    double x, y, result;

    printf("실수 2개를 입력하세요: ");
    scanf("%lf %lf", &x, &y);

    result = x + y;
    printf("%.2f + %.2f = %.2f\n", x, y, result);
    result = x - y;
    printf("%.2f - %.2f = %.2f\n", x, y, result);
    // ^ double 변수를 출력할 때는 %f 또는 %lf
    result = x * y;
    printf("%.2f * %.2f = %.2f\n", x, y, result);
    result = x / y;
    printf("%.2f / %.2f = %.2f\n", x, y, result);
    
    return 0;
}