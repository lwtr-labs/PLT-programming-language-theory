#include <stdio.h>

struct Queue {
    int ary[100];
    int front;
    int header;
    int count;
};

void InitializeQueue(struct Queue* queue) {
    queue->front = 0;
    queue->header = 0;
    queue->count = 0;
}

void Push(struct Queue* queue, int x) {
    queue->ary[queue->header++] = x;
    queue->count += 1;
}

int Pop(struct Queue* queue) {
    if (queue->count == 0) {
        return -1;
    }
    queue->count -= 1;
    return queue->ary[queue->front++];
}

int Count(struct Queue* queue) {
    return queue->count;
}

int main(void) {
    int n;
    scanf("%d", &n);

    struct Queue numbers;
    InitializeQueue(&numbers);

    char command;
    int input_num;

    for (int i = 0; i < n; i++) {
        scanf(" %c", &command);

        if (command == 'i') {
            scanf("%d", &input_num);

            Push(&numbers, input_num);
        } else if (command == 'c') {
            printf("%d\n", Count(&numbers));
        } else if (command == 'o') {
            int out = Pop(&numbers);
            if (out == -1) {
                printf("empty\n");
            } else {
                printf("%d\n", out);
            }
        }
    }
}