#include <stdio.h>
int main(void) {
    int i, j, k;
    char char_arr[15][15];
    char input;

    for(i = 0; i < 15; i++) {
        for(j = 0; j < 15; j++) {
            scanf("%c", input);

            if(input == '\n') {
                for(k = j; k < 15; k++)
                    char_arr[i][k] = ' ';
                break;
            }
            else
                char_arr[i][j] = input;
        }
    }

    for(j = 0; j < 15; j++) {
        for(i = 0; i < 15; i++) {
            if(char_arr[i][j] == ' ')
                continue;
            else
                printf("%c", char_arr[i][j]);
        }
    }

    return 0;
}