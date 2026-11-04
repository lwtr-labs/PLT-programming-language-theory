#include <stdio.h>

struct Queue {
    int ary[200];
    int header;
    int first;
    int key_index;
};

void InitQueue(struct Queue* queue);
void Push(struct Queue* queue, int x);
int Pop(struct Queue* queue);

int main(void) {
    struct Queue queue;
    int a, n, m, input, max, pop, exit;
    int count = 0;
    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        exit = 0;
        scanf(" %d %d", &n, &m);
        InitQueue(&queue);        
        queue.key_index = m;

        for (int j = 0; j < n; j++) {   // 정보 입력
            scanf(" %d", &input);
            Push(&queue, input);
        }

        max = 0; // 최댓값 찾기
        for (int k = queue.first; k < queue.header; k++)
            max = queue.ary[k] > max ? queue.ary[k] : max;

        for (int j = 0; j < n * n; j++) {
            if (queue.key_index == queue.first && queue.ary[queue.key_index] >= max) {
                count += 1;
                exit = 1;   // 만약 key_index == first 이며, max보다 클때
            }
            if (exit) {
                printf("%d\n", count);
                count = 0;
                exit = 0;
                break;
            }
            if (queue.first == queue.key_index && max > queue.ary[queue.key_index]) {
                pop = Pop(&queue);  // 만약 first = key_index이고, max > ary[key_index] 일때
                Push(&queue, pop);  // 큐 뒤로 미루기
                queue.key_index = queue.header - 1; // 변경된 key_index 업데이트
            }
            
            pop = Pop(&queue);  // 팝

            if (pop >= max) {   // pop >= max라면,
                count += 1;     // count += 1
                max = 0;
                for (int k = queue.first; k < queue.header; k++)
                    max = queue.ary[k] > max ? queue.ary[k] : max;  // 최댓값 재확인
            } else {
                Push(&queue, pop);  // pop < max라면, 큐 뒤로 미루기
            }          
            if (exit) { // exit == 1일때, count 출력하고, 다음 진행.
                printf("%d\n", count);
                count = 0;
                exit = 0;
                break;
            }                  
        }
    }
}

void InitQueue(struct Queue* queue) {
    for (int i = 0; i < 200; i++)
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