#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int answer;
    int guess;
    int tries = 0;
    srand((unsigned)time(NULL));
    answer = rand() % 100;

    do {
        printf("정답을 추측해 보세요(0-99): ");
        scanf("%d", &guess);
        tries++;

        if (guess > answer)
            printf("DOWN!\n");
        else if (guess < answer)
            printf("UP!\n");
    } while (guess != answer);
    printf("축하합니다!! 시도횟수: %d\n", tries);
    return 0;
}