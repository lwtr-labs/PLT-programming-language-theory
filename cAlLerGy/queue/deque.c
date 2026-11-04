#include <stdio.h>
#define SIZE 10
struct Deque{
    int ary[SIZE];
    int header;
    int tail;
    int count;
};

// pop depop

void InitDeque(struct Deque* deque) {
    deque->header = 0;
    deque->tail = 0;
    deque->count = 0;
}

int BackPop(struct Deque* deque) {
    if (deque->count == 0)
        return -1;
    deque->count -= 1;
    deque->header = (deque->header - 1) % SIZE;
    return deque->ary[deque->header];
}

int FrontPop(struct Deque* deque) {
    if (deque->count == 0)
        return -1;
    deque->count -= 1;
    return deque->ary[deque->tail++];
}

void BackPush(struct Deque* deque, int x) {
    deque->ary[deque->header++] = x;
    deque->count += 1;
}

void FrontPush(struct Deque* deque, int x) {
    deque->tail = (deque->tail-1) % SIZE;
    deque->ary[deque->tail];
    deque->count += 1;
}

