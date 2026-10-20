#include <stdio.h>

#define SPH 3600
#define SPM 60

int main(void) {
    int input, hour, minute, second;

    printf("21억 이하의 초를 입력하세요.\n> ");
    scanf("%d", &input);

    // calculate
    hour = input / SPH;
    input = input % SPH;
    minute = input / SPM;
    second = input % SPM;

    printf("%2d시 %2d분 %2d초\n", hour, minute, second);

    return 0;
}