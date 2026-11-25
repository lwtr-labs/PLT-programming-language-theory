#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch = 'a';

    if (isalpha(ch))
        printf("%c는 영문자입니다.\n", ch);
    
    if (isdigit(ch))
        printf("%c는 숫자입니다.\n", ch);
    
    printf("대문자 변환: %c\n", toupper(ch));

    return 0;
}