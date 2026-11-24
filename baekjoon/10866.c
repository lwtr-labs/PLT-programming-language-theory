#include <stdio.h>
#define MAX_SIZE 10000  // -> 0 ~ 9999
                        // 

struct Deque {
    int arr[MAX_SIZE];
    int front;
    int back;
    int count;
};

void InitQueue(struct Deque* deque) {
    int front = 0;
    int back = 0;
    int count = 0;
}

void Push_Front(struct Deque* deque, int x) {
    deque->front = (deque->front - 1) % MAX_SIZE;
    deque->arr[deque->front] = x;
}

void Push_Back(struct Deque* deque, int x) {
    deque->arr[deque->back] = x;
    deque->back = (deque->back + 1) % MAX_SIZE;
}

int Pop_Front(struct Deque* deque) {
    deque->
}

int Pop_Back(struct Deque* deque) {

}

int Size(struct Deque* deque) {

}

int Front(struct Deque* deque) {

}

int Back(struct Deque* deque) {

}