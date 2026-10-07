// 예제 #4. 안전한 나눗셈

#include <stdio.h>

int main(void) {
    int n, d, result;

    printf("분자와 분모를 순서대로 입력: ");
    scanf("%d %d", &n, &d);

    if(d == 0) {
        printf("0으로 나눌 수 없습니다!\n");
    }
    else {
        result = n / d;
        printf("결과는 %d입니다.\n", result);
    }

    return 0;
}