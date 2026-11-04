#include <stdio.h>

struct Queue {
    int ary[10000];
    int header;
    int first;
    int key_index;
};

void InitQueue(struct Queue* queue);
void Push(struct Queue* queue, int x);
int Pop(struct Queue* queue);

int main(void) {
    struct Queue queue;
    int a, n, m, input, max, pop, exit = 0;
    int count = 0;
    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        scanf(" %d %d", &n, &m);
        InitQueue(&queue);
        queue.key_index = m;

        for (int j = 0; j < n; j++) {
            scanf(" %d", &input);
            Push(&queue, input);
        }

        max = 0;
        for (int k = queue.first; k < queue.header; k++)
            max = queue.ary[k] > max ? queue.ary[k] : max;

        for (int j = 0; j < n * n; j++) {
            if (queue.key_index == queue.first && queue.ary[queue.key_index] >= max) {
                count += 1;
                exit = 1;
            }
            if (exit) {
                printf("%d\n", count);
                count = 0;
                exit = 0;
                break;
            }
            if (queue.first == queue.key_index && max > queue.ary[queue.key_index]) {
                pop = Pop(&queue);
                Push(&queue, pop);
                queue.key_index = queue.header - 1;
            }
            
            pop = Pop(&queue);

            if (pop >= max) {
                count += 1;
                max = 0;
                for (int k = queue.first; k < queue.header; k++)
                    max = queue.ary[k] > max ? queue.ary[k] : max;
            } else {
                Push(&queue, pop);
            }          
            if (exit) {
                printf("%d\n", count);
                count = 0;
                exit = 0;
                break;
            }                  
        }
    }
}

void InitQueue(struct Queue* queue) {
    for (int i = 0; i < 10000; i++)
        queue->ary[i] = 0;
    queue->header = 0;
    queue->first = 0;
}
void Push(struct Queue* queue, int x) {
    queue->ary[queue->header++] = x;
}
int Pop(struct Queue* queue) {
    return queue->ary[queue->first++];
}