#include <stdio.h>

int main(void) {
    int month, days;

    printf("월을 입력하세요: ");
    scanf("%d", &month);

    switch(month) {
        case 2:
            days = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        default:
            days = 31;
            break;
    }

    printf("%d월은 %d일입니다.\n", month, days);
    return 0;
}