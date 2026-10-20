#include <stdio.h>

int main(void) {
    int x, y = 1;

    while(y <= 5) {
        x = 0;
        while (x < y) {
            printf("*");
            x++;
        }
        printf("\n");
        y++;
        
    }

    return 0;
}