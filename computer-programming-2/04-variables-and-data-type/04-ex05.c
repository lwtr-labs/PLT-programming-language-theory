// 예제 #5. char형의 연산

// char에는 문자에 대응하는 정수 값이 저장
// 문자 코드는 정수 값이므로 산술 연산이 가능

#include <stdio.h>

int main(void) {
    char code = 'A';

    printf("%d %d %d\n", code, code + 1, code + 2); // 65 66 67
    printf("%c %c %c\n", code, code + 1, code + 2); // A B C

    return 0;
}