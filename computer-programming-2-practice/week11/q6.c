#include <stdio.h>
#define ROWS 3
#define COLS 5

int main(void) {
    int A[ROWS][COLS] = { {  1,  2,  3,  4,  5 }, 
                          {  6,  7,  8,  9, 10 },
                          { 11, 12, 13, 14, 15 } };
    int B[COLS][ROWS];

    for (int i = 0; i < ROWS; i ++)
        for (int j = 0; j < COLS; j++)
            B[j][i] = A[i][j];
    printf("원본 행렬 (%dx%d)\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++)
            printf("%3d", A[i][j]);
        printf("\n");
    }
    printf("\n전치 행렬 (%dx%d)\n", COLS, ROWS);
    for (int i = 0; i < COLS; i++) {
        for (int j = 0; j < ROWS; j++)
            printf("%3d", B[i][j]);
        printf("\n");
    }
    return 0;
}