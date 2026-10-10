#include <stdio.h>

struct Stack {
    int ary[10000];
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
    int n_plate, time;

    scanf("%d %d", &n_plate, &time);

    struct Stack place_1;
    InitializeStack(&place_1);

    for (int j = n_plate; j > 0; j--) {
        Push(&place_1, j);
    }

    struct Stack place_2;
    InitializeStack(&place_2);

    struct Stack place_3;
    InitializeStack(&place_3);

    int c, d;

    for (int i = 0; i < time; i++) {
        scanf("%d %d", &c, &d); // c == 1: wash, c == 2: dry
        if (c == 1) {
            for (int j = 0; j < d; j++) {
                Push(&place_2, Pop(&place_1));
            }
        } else {    // c == 2;
            for (int j = 0; j < d; j++) {
                Push(&place_3, Pop(&place_2));
            }
        }
    }

    for (int i = 0; i < n_plate; i++) {
        printf("%d\n", Pop(&place_3));
    }

    return 0;
}