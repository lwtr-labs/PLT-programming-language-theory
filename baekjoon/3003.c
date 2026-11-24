#include <stdio.h>

int compare(int n, int base) {
    if (n != base)
        return base - n;
    else
        return 0;
}

int main(void) {
    int ki, qu, ro, bi, kn, pa;

    scanf("%d %d %d %d %d %d", &ki, &qu, &ro, &bi, &kn, &pa);

    printf("%d %d %d %d %d %d",
            compare(ki, 1),
            compare(qu, 1),
            compare(ro, 2),
            compare(bi, 2),
            compare(kn, 2),
            compare(pa, 8));

    return 0;
}