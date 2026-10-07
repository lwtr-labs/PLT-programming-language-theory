// 예제 #7. 문자 분류하기

#include <stdio.h>

int main(void) {
    char ch;

    printf("문자 1개를 입력하세요: ");
    ch = getchar();
    if (ch >= 'A' && ch <= 'Z')
        printf("%c는 대문자입니다.\n", ch);
    else if (ch >= 'a' && ch <= 'z')
        printf("%c는 소문자입니다.\n", ch);
    else if (ch >= '0' && ch <= '9')
        printf("%c는 숫자입니다.\n", ch);
    else
        printf("%c는 기타 문자입니다.\n", ch);

    return 0;
}