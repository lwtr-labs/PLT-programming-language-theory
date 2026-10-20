#include <stdio.h>

// 정수 입력을 위한 함수 get_integer()
int get_integer(void) {
    int value;
    printf("정수를 입력하세요: ");
    scanf("%d", &value);
    
    return value;
}

// 정수의 합을 구하는 함수 add()
int add(int x, int y) {
    return x + y;
}

//정수의 합을 계산하는 프로그램
int main(void) {
    int x = get_integer();
    int y = get_integer();

    int sum = add(x, y);
    printf("두수의 합은 %d입니다. \n", sum);
    return 0;
}

