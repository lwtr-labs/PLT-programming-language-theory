#include <stdio.h>

int main(void) {
    int x = 10;
    int y = 010;
    int z = 0x10;

    char code1 = 'A';
    char code2 = 65;
    
    printf("-- 진법 출력 --\n");
    printf("10진수: x = %d\n", x);
    printf(" 8진수: y = %o\n", y);
    printf("16진수: z = %x\n", z);

    printf("\n -- 접두사 포함 --\n");
    printf("10진수: x = %d\n", x);
    printf(" 8진수: y = %#o\n", y);
    printf("16진수: x = %#x\n", z);

    printf("\n -- char형 출력 -- \n");
    printf("%d\n", code1);
    printf("%c\n", code1);

    printf("%d\n", code2);
    printf("%c\n", code2);

    return 0;
}