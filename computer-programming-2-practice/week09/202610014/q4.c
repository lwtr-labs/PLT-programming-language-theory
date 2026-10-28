#include <stdio.h>

long long int factorial(int n) {
    printf("factorial(%d)\n", n);

    if(n <= 1) return 1;
    else return n * factorial(n - 1);
}

int main(void) {
    int x = 0;
    long long int fact;

    printf("정수를 입력하세요: ");
    scanf("%d", &x);

    fact = factorial(x);
    printf("%ld!은 %lld입니다.\n", x, fact);

    return 0;
}