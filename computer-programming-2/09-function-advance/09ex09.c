// 시간 예측하기

#include <stdio.h>
#include <time.h>

int main(void) {
    time_t start, end;

    start = time(NULL); // 시작 시각 저장
    printf("10초가 지나면 엔터키를 누르세요.\n");

    getchar();  // 엔터키 입력 대기

    end = time(NULL);
    printf("경과된 시간: %.0f초\n", difftime(end, start));

    return 0;
}