#include <stdio.h>

int main(void) {

    // 05수식과 연산자 13쪽
    printf("\n--- 전위/후위 증감 연산자 확인 ---\n");
    
    int a = 1;

    printf("(1+ a++) + 10 = %d\n", (1 + a++) + 10);
    printf("a: %d\n", a);

    // 17쪽 수식 안에서 대입
    printf("\n--- 수식 안에서 대입 결과 확인 ---\n");

    int x, y;

    y = 10 + ( x = 2 + 7 );

    printf("x: %d, y: %d\n", x, y);


    // 48쪽 정수끼리 형변환
    char c48;

    printf("char 10 ->%d\nchar 10000 -> %d\n", (c48 = 10, c48), (c48 = 10000));


    return 0;
}