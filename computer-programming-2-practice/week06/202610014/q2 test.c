#include <stdio.h>

int main(void) {
    int month, days;

input:
    printf("월을 입력하세요\n> ");
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
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            break;
        default:
            printf("잘못된 요일입니다.\n\n");
            goto input;
    }   

    printf("%d월은 %d일입니다.\n", month, days);

    return 0;
}