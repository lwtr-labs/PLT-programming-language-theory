#include <stdio.h>

int main(void) {
    char ary[10];
    int i;

    for (i = 0; i < 10; i++) {
        scanf(" %c", &ary[i]);
    }

    for (i = 0; i < 10; i++) {
        printf("%c", ary[i]);
    }

    return 0;
}