#include <stdio.h>
#include <string.h>

int main(void) {
    char str[80];

    strcpy(str, "Hello world from ");
    strcat(str, "strcpy ");
    strcat(str, "and ");
    strcat(str, "strcat!");
    printf("ser = %s\n", str);
    return 0;
}