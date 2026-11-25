// 2진수 출력 함수
#include <stdio.h>

void print_binary(int x);

int main(void) {
    print_binary(9);
    printf("\n");

    return 0;
}

void print_binary(int x) {  // 정수를 2진수로 변환 후 출력하는 함수
    if (x > 0) {
        print_binary(x / 2);    // 몫을 이용해 재귀 호출
        printf("%d", x % 2);    // 나머지를 출력
    }
}