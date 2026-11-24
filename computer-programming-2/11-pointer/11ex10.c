#include <stdio.h>

int main(void) {
    int a[] = { 10, 20, 30 };
    int *p = a;

    printf("처음: a[0] = %d, *p = %d\n", a[0], *p);

    (*p)++;
    printf("값 증가: a[0] = %d, *p = %d\n", a[0], *p);

    int x = *p++;
    printf("*p++: x = %d, *p = %d\n", x, *p);

    x = *++p;
    printf("*++p: x = %d, *p = %d\n", x, *p);
    
    x = ++*p;
    printf("++*p: x = %d, *p = %d\n", x, *p);

    return 0;
}