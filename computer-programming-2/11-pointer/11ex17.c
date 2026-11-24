#include <stdio.h>
// 달력 만들기
int main(void) {
    int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int cal[6][7] = { 0 };  // 최대 6주 x 7일, 0은 빈칸
    int month, start, pos;

    printf("월 입력(1-12): ");
    scanf("%d", &month);
    printf("1일의 요일 입력(0:일 - 6:토): ");
    scanf("%d", &start);

    // 1월부터 말일까지 달력 배열에 채우기
    pos = start;    // 1일에 들어갈 칸 위치
    for (int d = 1; d <= days[month - 1]; d++) {
        cal[pos / 7][pos % 7] = d; // pos를 주(행), 요일(열)로 변환
        pos++;
    }

    // 달력 출력
    printf("\n%10d월\n", month);
    printf(" 일 월 화 수 목 금 토\n");
    for (int w = 0; w < 6; w++) {
        int *p = cal[w];    // w번째 주의 시작 주소
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
