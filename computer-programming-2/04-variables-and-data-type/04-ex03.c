// 예제 #3. 진법 출력

#include <stdio.h>

int main(void) {
    int x = 10;     // 10진수 10
    int y = 010;    // 8진수 10
    int z = 0x10;   // 16진수 10

    printf("10진수 : x = %d\n", x);
    printf("8진수 : x = %o\n", y);
    printf("16진수 : x = %x\n", z);

    printf("\n -- 접두사 포함 --\n");

    printf("10진수: x = %d\n", x);      // d: decimal (10진법)
    printf(" 8진수: y = %#o\n", y);     // o: octal ( 8진법)
    printf("16진수: z = %#x\n", z);     // x: hexademical (16진법)

    return 0;
}

// 10진수 : x = 10
// 8진수 : x = 10
// 16진수 : x = 10

//  -- 접두사 포함 --
// 10진수: x = 10
//  8진수: y = 010
// 16진수: z = 0x10