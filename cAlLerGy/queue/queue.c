#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 2000000

struct Queue {
    int arr[MAX_QUEUE_SIZE];
    int front, back, count;
};

void InitQueue(struct Queue* queue) {
    // Queue 초기화
    queue->front = 0;   // queue->front : queue의 front
    queue->back = 0;
    queue->count = 0;
}

void Push(struct Queue* queue, int x) {
    // back이 가리키는 곳에 x를 저장하고, back 한 칸 뒤로 이동

    queue->arr[queue->back] = x;    // back이 가리키는 곳에 x를 저장,
    queue->back += 1;               // back 한 칸 뒤로 이동
    queue->count += 1;
}

int Pop(struct Queue* queue) {
    // queue의 pop은 가장 먼저 들어온 요소를 제거한다.
    if (queue->count == 0) {
        return -1;
    }
    queue->count -= 1;                  
    return queue->arr[queue->front];    // front가 가리키는 요소 반환
    queue->front += 1;                  // front 헤더를 한 칸 앞으로
}

int IsEmpty(struct Queue* queue)
{
    return queue->count ? 1 : 0; // queue의 요소 개수가 0이 아니면 1, 
}

int Size(const struct Queue* queue) {   
    return queue->count;    // 크기(요소 개수) 출력
}

int Front(const struct Queue* queue) {  
    if (queue->count == 0)
        return -1;
    return queue->arr[queue->front];    // 앞 요소 출력
}

int Back(const struct Queue* queue) {
    if (queue->count == 0)
        return -1;
    return queue->arr[queue->back -1];  // back은 저장된 공간 옆,
                                        // 저장될 공간을 가리키므로
}

/*
문제 추측

첫 줄에는 명령의 개수 n이 주어진다.

존재하는 명령어는 다음과 같다.
push x
pop
size
empty
first
back
*/

int main() {
    int n;              // 앞으로 주어질 명령의 개수
    scanf("%d", &n);

    struct Queue queue; // 구조체 Queue: 이름 queue로 선언
    InitQueue(&queue);  // queue 초기화

    char command[6];    // push x <- idx: 5
    for (int i = 0; i < n; i++) {
        scanf("%s", command);

        if (command[0] == 'p' && command[1] == 'u') {
            // push x
            int x;
            scanf("%d", &x);
            Push(&queue, x);
        } else if (command[0] == 'p') {
            // pop
            printf("%d\n", Pop(&queue));
        } else if (command[0] == 's') {
            // size
            printf("%d\n", Size(&queue));
        } else if (command[0] == 'e') {
            // empty
            printf("%d\n", IsEmpty(&queue));
        } else if (command[0] == 'f') {
            // front
            printf("%d\n", Front(&queue));
        } else if (command[0] == 'b') {
            // back
            printf("%d\n", Back(&queue));
        }
    }
    return 0;
}

