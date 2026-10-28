#include <stdio.h>
#include <time.h>

int main(void) {
    time_t start, end;

    start = time(NULL);
    printf("10초가 지나면 엔터키를 누르세요.\n");

    getchar();

    end = time(NULL);
    printf("경과된 시간: %.0f초\n", difftime(end, start));
    printf("시작 시간: %d초, 종료 시간 %d초\n", start, end);

    return 0;
}