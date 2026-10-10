// 예제 #7. 사용자 입력 값의 합계 구하기

#include <stdio.h>

int main(void) {
    int n, i, sum;

    i = 0;
    sum = 0;

    while (i < 5) {
        printf("정수를 입력하세요: ");
        scanf("%d", &n);
        i++;
    }

    printf("합계는 %d입니다.\n", sum);
    return 0;
}