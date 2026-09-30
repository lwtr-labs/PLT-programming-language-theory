#include <stdio.h>
#define RATE 0.2

int main(void) {
    int x = 10;
    int count = 5;
    int score = 80;
    int sum = 100;

    x += 2;
    count += 5;
    score *= RATE;
    sum += score;

    printf("x = %d\n", x);
    printf("count = %d\n", count);
    printf("score = %d\n", score);
    printf("sum = %d\n", sum);

    return 0;
}