// 예제 #1. 양수 구분하기

#include <stdio.h>

int main(void) {
    int number;

    printf("정수 1개 입력: ");
    scanf("%d", &number);

    if(number > 0) {
        printf("양수입니다.\n");
    }
        
    printf("입력된 값은 %d입니다.\n", number);

    return 0;
}