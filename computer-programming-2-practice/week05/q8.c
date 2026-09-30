#include <stdio.h>

int main(void) {
    int year, month, day;
    int days;

    printf("날짜를 입력하세요(연 월 일): ");
    scanf("%d %d %d", &year, &month, &day);

    if (month < 1 || month > 12) {
        printf("올바르지 않은 날짜입니다.\n");
        return 0;
    }

    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            days = 29;
        else
            days = 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else {
        days = 31;
    }

    if (day >= 1 && day <= days)
        printf("올바른 날짜입니다.\n");
    else
        printf("올바르지 않은 날짜입니다.\n");
    
    return 0;
}