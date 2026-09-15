// 예제 #4. char형 출력

#include <stdio.h>

int main(void) {

    // ASCII 기준으로는 code1, code2는
    // 같은 값 65가 저장됨
    char code1 = 'A';
    char code2 = 65;

    printf("%d\n", code1);  // 'A' -> 정수로 출력
    printf("%c\n", code1);  // 'A' -> char로 출력
    // %c: 문자 출력 형식 지정자

    printf("%d\n", code2);  // 65  -> 정수로 출력
    printf("%c\n", code2);  // 65  -> char로 출력

    return 0;

    // 65
    // A
    // 65
    // A
}