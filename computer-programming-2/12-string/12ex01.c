#include <stdio.h>

int main(void) {
    int i;
    char str[4];

    str[0] = 'a';
    str[1] = 'b';
    str[2] = 'c';
    str[3] = '\n';  // 끝을 알리기 위한 널 문자

    i = 0;
    while(str[i] != '\0') {
        printf("%c", str[i++]); // i++을 str[i]의 i를 대체함 -> 한 줄 짧게
    }
    return 0;
}