#include <stdio.h>
#define ROWS 3
#define COLS 5
#define PAGES 2

int main(void) {
    int s[PAGES][ROWS][COLS];

    for (int k = 0; k < PAGES; k++)
        for (int i = 0; i < ROWS; i++)
            for (int j = 0; j < COLS; j++)
                s[k][i][j] = k * 100 + i * 10 + j;

    for (int k = 0; k < PAGES; k++) {
        printf("[%d번째 면]\n", k);
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++)
                printf("%03d ", s[k][i][j]);
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}