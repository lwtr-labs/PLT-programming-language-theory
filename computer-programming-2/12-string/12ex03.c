#include <stdio.h>

int main(void) {
    char scr[] = "I am your father.";
    char dst[100];
    int i;

    printf("원본 문자열: %s\n", scr);
    for(i = 0; scr[i] != '\0'; i++)
        dst[i] = scr[i];

    dst[i] = '\0';  // 복제 문자열의 끝에 널 문자 추가
    printf("복제 문자열: %s\n", dst);

    return 0;
}