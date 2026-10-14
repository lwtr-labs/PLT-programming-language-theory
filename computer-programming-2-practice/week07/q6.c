#include <stdio.h>

int main(void) {
    int i;

    for (i = 0; i < 5; i++) {
        static int temp = 1;
        printf("temp = %d\n", temp);
        temp++;
    }
    return 0;
}