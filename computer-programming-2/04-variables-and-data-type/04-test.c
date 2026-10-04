#include <stdio.h>

int main(void) {
    int i;

    for (i = 0; i < 128; i++) {
        printf("%c ", i);
        if (i % 10 == 0) { printf("\n"); }
    }
    return 0;
}