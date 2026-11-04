#include <stdio.h>
#define STUDENT 5

int main(void) {
    int scores[STUDENT];
    int sum = 0;
    int i;
    float average;

    for(i = 0; i < STUDENT; i++) {
        printf("성적을 입력하세요: ");
        scanf("%d", &scores[i]);
    }

    for(i = 0; i < STUDENT; i++)
        sum += scores[i];

    average = sum / STUDENT;
    printf("평균: %.3f\n", average);

    return 0;
}