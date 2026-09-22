#include <stdio.h>

int main(void) {
    int x;
    int y;
    
    printf("첫 번째 숫자: ");
    scanf("%d", &x);

    printf("두 번째 숫자: ");
    scanf("%d", &y);
    
    printf("%d + %d = %d\n", x, y, x + y);
    printf("%d - %d = %d\n", x, y, x - y);
    printf("%d * %d = %d\n", x, y, x * y);
    printf("%d / %d = %d\n", x, y, x / y);

    return 0;
}