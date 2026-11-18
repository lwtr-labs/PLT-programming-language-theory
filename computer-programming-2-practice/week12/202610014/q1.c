#include <stdio.h>

int main(void) {
    int i = 10;
    double f = 12.3;
    int *pi = &i;
    double *pf = &f;

    printf("pi: %p, &i: %p\n", (void *)pi, (void *)&i);
    printf("pi: %p, &i: %p\n", pi, &i);
    printf("pf: %p, &f: %p\n", (void *)pf, (void *)&f);
    printf("pf: %p, &f: %p\n", pf, &f);

    return 0;
}