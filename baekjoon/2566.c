#include <stdio.h>

int main(void) {
    int i, j, input;
    int max, max_row, max_col;

    max = -1;

    for(i = 0; i < 9; i++) {
        for(j = 0; j < 9; j++) {
            scanf(" %d", &input);
            if(max < input) {
                max = input;
                max_row = i; max_col = j;            
            }
        }
    }

    printf("%d\n%d %d", max, max_row + 1, max_col + 1);

    return 0;
}