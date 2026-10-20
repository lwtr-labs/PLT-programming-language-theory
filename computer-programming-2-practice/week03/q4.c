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

/**
 * char          1byte    8bit 
 * short         2byte   16bit
 * int           4byte   32bit
 * long          4byte   32bit
 * long long     8byte   64bit
 * float         4byte   32bit
 * double        8byte   64bit
 * long double  16byte  128bit
 */