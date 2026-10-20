// 예제 #10. 사용자 입력 합계 구하기 - 수정

#include <stdio.h>

int main(void) {
    int number, sum = 0;

    do {
        printf("정수를 입력하세요(입력 종료는 음수): ");
        scanf("%d", &number);
        if (number < 0)
            break;
        sum += number;
    } while (number >= 0);

    printf("입력 데이터의 합 = &d\n", sum);
    return 0;
}