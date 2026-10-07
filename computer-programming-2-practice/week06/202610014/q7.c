#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 9; i++) {
        for(int dan = 1; dan <= 9; dan++) {
            printf("%1d X %1d = %2d\t", dan, i, dan * i);
        }
        printf("\n");
    }

    return 0;
}