#include <stdio.h>
#define SIZE 5

int main(void) {
    int a[SIZE] = { 31, 63, 62, 87, 14 };
    int b[SIZE] = { 31, 63 };
    int c[SIZE];

    for(int i = 0; i < SIZE; i ++)
        printf("a[%d] = %d\n", i, a[i]);

    for(int i = 0; i < SIZE; i ++)
        printf("b[%d] = %d\n", i, b[i]);

    for(int i = 0; i < SIZE; i ++)
        printf("c[%d] = %d\n", i, c[i]);
        
    return 0;
}