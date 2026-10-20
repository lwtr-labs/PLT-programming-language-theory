// 별(*)로 삼각형 그리기

#include <stdio.h>

int main(void) {
    for(int y = 1; y <= 5; y++) {
        for(int x = 0; x < y; x++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}