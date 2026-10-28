// calc_main.c
#include <stdio.h>
#include "calc.h"

int main(void) {
    int x, y, result;
    
    printf("정수 2개 입력: ");
    scanf("%d %d", &x, &y);
    result = add(x, y);
    printf("result = %d\n", result);

    return 0;
}