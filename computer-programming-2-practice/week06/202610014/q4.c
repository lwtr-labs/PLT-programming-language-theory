#include <stdio.h>

int main(void) {
    int i, n, sum;

    printf("정수를 입력하세요: ");
    scanf("%d", &n);

    i = 2;
    sum = 0;

    while(i <= n) {
        sum += i;
        i += 2;
    }

    printf("1부터 %d 사이의 짝수의 합은 %d입니다.\n", n, sum);
    return 0;
}