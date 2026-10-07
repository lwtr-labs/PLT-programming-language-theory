#include <stdio.h>

int main(void) {
    int score;
    int sum = 0;
    int count = 0;

    printf("점수를 입력하세요(-1 입력 시 종료)\n");

    while (1) {
        printf("> ");
        scanf("%d", &score);
        if (score == -1)
            break;
        if (score < 0 || score > 100) {
            printf("잘못된 점수입니다.\n");
            continue;
        }
        sum += score;
        count++;
    }
    printf("입력된 점수: %d개\n", count);
    printf("평균: %.2f\n", (double)sum / count);

    return 0;
}