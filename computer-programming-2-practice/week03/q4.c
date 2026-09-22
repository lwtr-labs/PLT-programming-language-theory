#include <stdio.h>

int main(void) {
    printf("char형 크기: %d\n", sizeof(char));
    printf("short형 크기: %d\n", sizeof(short));
    printf("int형 크기: %d\n", sizeof(int));
    printf("long형 크기: %d\n", sizeof(long));
    printf("float형 크기: %d\n", sizeof(long long));
    printf("long long형 크기: %d\n", sizeof(float));
    printf("float형 크기: %d\n", sizeof(double));
    printf("long double형 크기: %d\n", sizeof(long double));
    
    return 0;
}