#include <stdio.h>

int main(void) {
    char op;
    int x, y;

    printf("수식을 입력하세요(예: 2 + 5) >> ");
    scanf("%d %c %d", &x, &op, &y);

    switch (op) {
        case '+':
            printf("%d %c %d = %d \n", x, op, y, x+y);
            break;
        case '-':
            printf("%d %c %d = %d \n", x, op, y, x-y);
            break;
        case '*':
            printf("%d %c %d = %d \n", x, op, y, x*y);
            break;        
        case '/':
            printf("%d %c %d = %.2f \n", x, op, y, (double)x/y);
            break;     
        default:
            printf("지원되지 않는 연산자입니다. \n");
    }       
     
    return 0;
}