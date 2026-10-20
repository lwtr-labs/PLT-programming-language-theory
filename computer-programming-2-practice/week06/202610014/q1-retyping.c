#include <stdio.h>

int main() {
    int x, y;
    double result;
    char op;

    scanf("%d %c %d", &x, &op, &y);

    switch(op) {
        case '+':
            printf("%d", x + y);
            break;
        case '-':
            printf("%d", x - y);
            break;
        case '*':
            printf("%d", x * y);
            break;
        case '/':
            printf("%.2f", (double)x / y);
            break;
        default:
            printf("wrong");
            break;
    }
    return 0;

}