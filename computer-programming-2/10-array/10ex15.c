#include <stdio.h>
#define ROWS 3
#define COLS 5

int main(void) {
    int s[ROWS][COLS];

    // 행과 열의 인덱스를 이용해 값 저장
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            s[i][j] = 10 * i + j;   // -> s[i][j] = ij <- 처럼 보이게
    
    // 2차원 배열 출력
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j <COLS; j++)
            printf("%02d ", s[i][j]);
        printf("\n");
    }
    return 0;
}