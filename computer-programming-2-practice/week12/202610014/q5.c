#include <stdio.h>

int main(void) {
    double a[3] = { 1.1, 2.2, 3.3 };
    char *pc = (char *)a;
    int *pi = (int *)a;
    double *pd = a;

    printf("char 포인터\n");
    printf("pc = %llu\npc+1 = %llu\npc+2 = %llu\n\n", pc, pc + 1, pc + 2);
    
    printf("int 포인터\n");
    printf("pi = %llu\npi+1 = %llu\npi+2 = %llu\n\n", pi, pi + 1, pi + 2);

    printf("double 포인터\n");
    printf("pd = %llu\npd+1 = %llu\npd+2 = %llu\n", pd, pd + 1, pd + 2);

    return 0;
}