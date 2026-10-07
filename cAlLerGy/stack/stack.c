#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 1000000

struct Stack {
    int arr[MAX_STACK_SIZE];
    int top;
};

void InitStack(struct Stack* stack) {
    stack->top = -1;    // stack의 top 헤더는 마지막 요소를 가리킨다.
}

void Push(struct Stack* stack, int x) {
    stack->top += 1;    // 따라서 다음 인덱스(빈공간)에 요소를 저장
    stack->arr[stack->top] = x;
}

int Pop(struct Stack* stack) {
    if (stack->top == -1)
        return -1;
    return stack->arr[stack->top--];
}

int Size(struct Stack* stack) {
    return stack-> top + 1;
}

int IsEmpty(struct Stack* stack) {
    return stack == -1 ? 1 : 0;
}

int Top(struct Stack* stack) {
    if (stack->top == -1) {
        return -1;
    }
    return stack->arr[stack->top];
}

int main() {
    int n;
    scanf("%d", &n);     // 첫 번째 줄: 다음 줄부터 주어질 명령의 수

    struct Stack stack;
    InitStack(&stack);

    for (int i = 0; i < n; i++) {
        int command;
        scanf("%d", &command);
    
        switch (command) {
            case 1:
            {
                int x;
                scanf("%d", &x);
                Push(&stack, x);
                break;
            }
            case 2:
            {
                printf("%d\n", Pop(&stack));
                break;
            }
            case 3:
            {
                printf("%d\n", Size(&stack));
                break;
            }
            case 4:
            {
                printf("%d\n", IsEmpty(&stack));
                break;
            }
            case 5:
            {
                printf("%d\n", Top(&stack));
                break;
            }
        }
    }

    return 0;
}