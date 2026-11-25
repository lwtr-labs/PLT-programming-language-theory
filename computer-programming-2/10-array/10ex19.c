#include <stdio.h>
#define ROWS 8
#define COLS 16

void display(int image[ROWS][COLS]) {
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++)
            printf("%c", image[r][c] ? '-' : '@');
        printf("\n");
    }
}

void inverse(int image[ROWS][COLS]) {
    // 모든 픽셀의 값 반전
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            if (image[r][c]) {
                image[r][c] = 0;
            } else {
                image[r][c] = 1;
            }
        }
    }
}

int main(void) {
    int image[ROWS][COLS] = { {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, 
                              {1,1,0,1,1,1,0,1,1,1,0,0,0,0,0,1}, 
                              {1,1,0,1,1,1,0,1,1,1,1,1,0,1,1,1}, 
                              {1,1,0,0,0,0,0,1,1,1,1,1,0,1,1,1}, 
                              {1,1,0,1,1,1,0,1,1,1,1,1,0,1,1,1}, 
                              {1,1,0,1,1,1,0,1,1,1,1,1,0,1,1,1}, 
                              {1,1,0,1,1,1,0,1,1,1,0,0,0,0,0,1}, 
                              {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1} };

    printf("변환 전 이미지\n");
    display(image);

    inverse(image);

    printf("\n변환 후 이미지\n");
    display(image);

    return 0;
}