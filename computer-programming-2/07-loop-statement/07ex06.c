// 예제 #6. 홀수의 합만 구하기

#include <stdio.h>

int main(void) {
    int n, i, sum;

    printf("정수를 입력하세요: ");
    scanf("%d", &n);

    i = 1;
    sum = 0;

    while (i <= n) {
        sum += i;
        i += 2;
    }

    printf("1부터 %d 사이의 홀수의 합은 %d입니다.\n", n, sum);
    return 0;
}