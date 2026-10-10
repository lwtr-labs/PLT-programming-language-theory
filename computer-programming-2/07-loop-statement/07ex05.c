// 예제 #5. 1부터 n까지의 합 구하기
#include <stdio.h>

int main(void) {
    int i, n, sum;

    printf("정수를 입력하세요: ");
    scanf("%d", &n);    // 합을 구할 최대값 입력

    i = 1;              // 반복에 사용할 변수 초기화
    sum = 0;            // 합계를 저장할 변수 초기화

    while (i <= n) {
        sum += i;       // sum = sum + i;
        i++;            // i = i + 1;
    }

    printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);
    return 0;
}