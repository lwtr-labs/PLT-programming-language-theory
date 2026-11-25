// 재귀적 팩토리얼 계산
#include <stdio.h>

int factorial(int n) {
    printf("factorial(%d)\n", n);

    if(n <= 1) return 1;
    else return n * factorial(n - 1);
}

int main(void) {
    int x = 0;
    int fact;

    printf("정수를 입력하세요: ");
    scanf("%d", &x);

    fact = factorial(x);
    printf("%d!은 %d입니다.\n", x, fact);

    return 0;
}