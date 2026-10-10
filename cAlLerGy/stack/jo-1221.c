#include <stdio.h>

struct Stack {
    int ary[16];
    int header;
};

void InitializeStack(struct Stack* stack) {
    stack->header = 0;
}

void Push(struct Stack* stack, int x) {
    stack->ary[stack->header++] = x;
}

int Pop(struct Stack* stack) {
    return stack->ary[--stack->header];
}

int main(void) {
    int n;
    int x, y, result;

    char input;

    scanf("%d", &n);

    struct Stack numbers;
    InitializeStack(&numbers);
    
    for (int i = 0; i < n; i++) {
        scanf(" %c", &input);
        // * (42), + (43), - (45), / (47)
        // 0 (48), 9 (57)
        if (input>= '0' && input <= '9') {
            result = (int)input - 48;
            Push(&numbers, result);
        } else {
            if (input == '*') {
                y = Pop(&numbers);
                x = Pop(&numbers);

                result = x * y;
                
                Push(&numbers, result);
            } else if (input == '+') {
                y = Pop(&numbers);
                x = Pop(&numbers);
                
                result = x + y;
                
                Push(&numbers, result);
            } else if (input == '-') {
                y = Pop(&numbers);
                x = Pop(&numbers);
                
                result = x - y;
                
                Push(&numbers, result);
            } else if (input == '/') {
                y = Pop(&numbers);
                x = Pop(&numbers);
                
                result = x / y;
                
                Push(&numbers, result);
            }
        }
    }

    printf("%d", numbers.ary[0]);

    return 0;
}