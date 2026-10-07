// 예제 #3. 홀짝 판단하기

#include <stdio.h>

int main(void) {
    int number;

    printf("정수 1개 입력: ");
    scanf("%d", &number);

    if(number % 2 == 0)
        printf("입력된 정수는 짝수입니다.\n");
    else
        printf("입력된 정수는 홀수입니다.\n");

    return 0;
}