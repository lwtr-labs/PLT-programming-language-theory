#include <stdio.h>

int main(void) {
    char src[] = "I am your father.";
    char dst[100];
    int i;

    printf("원본 문자열: %s\n", src);
    for (i = 0; src[i] != '\0'; i++)
        dst[i] = src[i];
    dst[i] = '\0';
    printf("복제 문자열: %s\n", dst);

    i = 0;

    while (dst[i] != '\0')
        i++;
    printf("문자열 \"%s\"의 길이: %d\n", dst, i);
    return 0;
}