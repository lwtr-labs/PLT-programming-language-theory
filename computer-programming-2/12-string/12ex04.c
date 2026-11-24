#include <stdio.h>

int main(void) {
    char str[30] = "Doddy is free!";
    int i = 0;

    while(str[i] != '\0')
        i++;

    printf("문자열 \"%s\"의 길이: %d\n", str, i);
    return 0;
}