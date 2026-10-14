#include <stdio.h>

int main(void) {
    printf("%%10d   : %10d\n", 123);
    printf("%%-10d  : %-10d\n", 123);

    printf("%%f     : %f\n", 1.23456789);
    printf("%%10.3f : %10.3f\n", 1.23456789);
    printf("%%-10.3f: %-10.3f\n", 1.23456789);
    printf("%%.3f   : %.3f\n", 1.23456789);

    return 0;
}