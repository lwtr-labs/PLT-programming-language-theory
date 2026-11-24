#include <stdio.h>
#define MAX_SIZE 5000000

int arr[MAX_SIZE];

struct Stack {
    int front;
    int back;
    int count;
    int size;
    int min;
    // int min_idx;
};

void Init(struct Stack* stack, int l) {
    stack->front = 0;
    stack->back = 0;
    stack->count = 0;
    stack->size = l;
    stack->min = 1000000000;
    // stack->min_idx = 0;
}

void Push(struct Stack* stack, int x) {
    arr[stack->back++] = x;
    stack->count += 1;

    if(stack->size + 1 == stack->count) {
        stack->count -= 1;
        stack->front++;
    }

    if(stack->min > arr[stack->back - 1]) {
        stack->min = arr[stack->back - 1];
        // stack->min_idx = stack->back - 1;
    } else {
        stack->min = arr[stack->front];
        for(int i = stack->front; i < stack->back; i++) {
            if(stack->min > arr[i]) {
                stack->min = arr[i];
                // stack->min_idx = i;
            }
        }
    }

}

int main(void) {
    int n, l;
    int i, input;

    struct Stack stack;
    
    scanf("%d %d", &n, &l);
    Init(&stack, l);

    for(i = 0; i < n; i++) {
        scanf(" %d", &input);
        Push(&stack, input);
        printf("%d ", stack.min);
    }
    return 0;
}