#include <stdio.h>
#define STUDENTS 5
int get_average(int scores[], int n);   // 매개변수: int scores[], 인자: scores (배열명은 배열의 첫 원소의 주소를 나타내기 때문)

int main(void) {
    int scores[STUDENTS] = {90, 80, 70, 60, 50};
    int avg;    // double
    
    avg = get_average(scores, STUDENTS);    // 배열과 원소 개수 전달
    printf("평균은 %d입니다.\n", avg);
    return 0;
}

int get_average(int scores[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += scores[i];
    return sum / n; // 평균 반환
}