#include <stdio.h>

extern unsigned random_i(void);
extern double random_f(void);
extern int MOD;

int main(void) {
    MOD = 32727;

    for (int i = 0; i < 10; i++)
        printf("random(%d) = %u\n", i, random_i() % 100);
    
    for (int i = 0; i < 10; i++)
        printf("random(%d) = %f\n", i, random_f());

    return 0;
}