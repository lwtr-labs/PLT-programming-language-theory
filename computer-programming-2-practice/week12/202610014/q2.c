#include <stdio.h>

int main(void) {
    float i = 1.2345;
    float *p = NULL;
    p = &i;

    printf("i = %.3f\n", i);
    printf("&i = %p\n\n", &i);

    printf("p = %p\n", p);
    printf("*p = %.3f\n", *p);

    return 0;
}