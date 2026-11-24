// OX 게임

#include <stdio.h>
#define SIZE 100

int main(void) {
    int n;
    char input;
    
    scanf("%d", &n);

    char arr[SIZE][SIZE];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf(" %c", &input);
            arr[i][j] = input;
        }
    }

    int yes = 1;
    // 행?
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            char std;
            if (j == 0) 
                std = arr[i][0];

            if (std != arr[i][j]) {
                yes = 0;
                break;
            } else {
                yes = 1;
            }
        }
        if (yes) break;
    } 
    
    if (yes == 0) {
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < n; i++) {
                char std;
                if (i == 0) 
                    std = arr[0][j];

                if (std != arr[i][j]) {
                    yes = 0;
                    break;
                } else {
                    yes = 1;
                }
            }
            if (yes) break;
        }        
    }

    if (yes) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}