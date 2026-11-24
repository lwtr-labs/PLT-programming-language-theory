#include <stdio.h>
#include <string.h>
#include <ctype.h>

int valid_password(const char *s);

int main(void) {
    char pass[100];

    printf("암호 입력: ");
    if (fgets(pass, sizeof(pass), stdin) == NULL)
        return 1;
    pass[strcspn(pass, "\n")] = '\0';

    if (valid_password(pass))
        printf("조건을 만족하는 암호입니다.\n");
    else
        printf("조건을 만족하지 않습니다.\n");
    
    return 0;
}

int valid_password(const char *s) {
    int upper = 0, lower = 0, digit = 0;    // 각 문자 종류의 포함 여부
    int len = strlen(s);    // 문자열 길이 계산

    if (len < 7)    // 7자 미만이면 0 반환
        return 0;
    
    for (int i = 0; i < len; i++) {
        if (isupper(s[i])) upper = 1;   // 대문자 발견
        if (islower(s[i])) lower = 1;   // 소문자 발견
        if (isdigit(s[i])) digit = 1;   // 숫자 발견
    }

    return upper && lower && digit; // 세 조건을 모두 만족하면 1 반환
}