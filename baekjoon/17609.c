#include <stdio.h>
#define MAX_SIZE 1000000

struct Stack {
    char list[MAX_SIZE];
    int front;
};

void Init(struct Stack* stack) {
    stack->front = 0;
}

void Push(struct Stack* stack, int input) {
    stack->list[stack->front++] = input;
}

char Pop(struct Stack* stack) {
    return stack->list[stack->front--];
}

int main(void) {
    int i;
    char c;
    int n;
    int char_count[128];
    struct Stack stack;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(int j = 0; j < 128; j++)
            char_count[j] = 0;

        Init(&stack);

        scanf("%c", &c);

        while(1) {
            scanf("%c", &c);
            if(c == '\n')
                break;
            // char_count[(int)c] += 1;
            if()
            Push(&stack, c);
        }

        // for(int j = 1; j <= 128; j++) {
        //     printf("%d ", char_count[j - 1]);
        //     if(!(j % 10))
        //         printf("\n");
        // }
    }
}