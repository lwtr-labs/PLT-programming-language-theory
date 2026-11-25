#include <stdio.h>

int main(void) {
    int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int cal[6][7] = { 0 };
    int month, start, pos;

    printf("월 입력(1~12): ");
    scanf("%d", &month);
    printf("1일의 요일 입력(0:일 ~ 6:토): ");
    scanf("%d", &start);

    pos = start;
    for (int d = 1; d <= days[month - 1]; d++) {
        cal[pos / 7][pos % 7] = d;
        pos++;
    }

    printf("\n%10d월\n", month);
    printf(" 일 월 화 수 목 금 토\n");
    for (int w = 0; w < 6; w++) {
        int *p = cal[w];
        for (int k = 0; k < 7; k++) {
            if (p[k] == 0)
                printf("   ");
            else
                printf("%3d", p[k]);
        }
        printf("\n");
    }
    return 0;
}