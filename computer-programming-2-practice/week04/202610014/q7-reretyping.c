#include <stdio.h>
#define SPH 3600
#define SPM 60

int main(void) {
    unsigned int input;
    int hour, minute, second;
    printf("42억 이하 초 입력: "), scanf("%u", &input);

    hour = input / SPH;
    input = input % SPH;
    minute = input / SPM;
    second = input % SPM;

    printf("%d => %d시 %d분 %d초", input, hour, minute, second);

    return 0;
}