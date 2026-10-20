// 팩토리얼 계산

#include <stdio.h>

int main(void) {
    int n;
    long long fact = 1;

    printf("팩토리얼을 구할 n을 입력하시오: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("%d!은 %lld입니다.\n", n, fact);
    return 0;
}