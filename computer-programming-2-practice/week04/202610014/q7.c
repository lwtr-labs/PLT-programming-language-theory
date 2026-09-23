#include <stdio.h>

#define SEC_PER_HOUR 3600
#define SEC_PER_MINUTE 60

int main(void) {
    int input, hour, minute, second;

    printf("변환할 시간 입력(초 단위, 21억 이하): ");
    scanf("%d", &input);

    hour = input / SEC_PER_HOUR;
    input = input % SEC_PER_HOUR;
    minute = input / SEC_PER_MINUTE;
    second = input % SEC_PER_MINUTE;

    printf("%u시간 %u분 %u초\n", hour, minute, second);

    return 0;
}