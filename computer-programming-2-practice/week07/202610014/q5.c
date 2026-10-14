#include <stdio.h>

int count = 5;

void sub1(void);
void sub2(void);

void sub1(void) {
    if (count <= 0) return;
    printf("sub1 호출\n");
    count--;
    sub2();
}

void sub2(void) {
    if (count <= 0) return;
    printf("sub2 호출\n");
    count--;
    sub1();
}

int main(void) {
    sub1();
    return 0;
}
