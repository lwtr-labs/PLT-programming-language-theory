// 예제 #8. 센티널(sentinel) 기반 성적 평균 계산

#include <stdio.h>

int main(void) {
    int grade;
    int n = 0;
    int sum = 0;
    double average;

    while (1) {
        printf("성적을 입력하세요(입력 종료는 -1): ");
        scanf("%d", &grade);
        if (grade < 0)
            break;
        sum += grade;
        n++;
    }
    average = (double)sum / n;
    printf("성적의 평균은 %.2f입니다.\n", average);

    return 0;
}