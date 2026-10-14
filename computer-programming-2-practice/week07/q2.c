#include <stdio.h>

long long factorial(int n);
long long combination(int n, int r);
int get_integer(void);

int main(void) {
    int a, b;

    a = get_integer();
    b = get_integer();

    printf("C(%d, %d) = %lld\n", a, b, combination(a, b));

    return 0;
}

long long factorial(int n) {
    int i;
    long long result = 1;

    for (i = 1; i <= n; i++)
        result *= i;

    return result;
}

long long combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n-r));
}

int get_integer(void) {
    int value;
    printf("정수를 입력하세요: ");
    scanf("%d", &value);

    return value;
}