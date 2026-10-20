#include <stdio.h>

int main(void) {
    for(int i = 2; i <= 9; i++) {
        for(int j = 1; j <= 9; j++){
            printf("%2d x %2d = %2d\t", i, j, i * j);
        }
        printf("\n");
    }

    printf("\n\n");

    for(int i = 1; i <= 9; i++) {
        for(int j = 2; j <= 9; j++){
            printf("%2d x %2d = %2d\t", j, i, i * j);
        }
        printf("\n");
    }


    return 0;
}