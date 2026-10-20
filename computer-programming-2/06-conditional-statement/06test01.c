#include <stdio.h>

int main(void) {
    int score;

    printf("Enter your score.\n> ");
    scanf("%d", &score);

    if (score > 80)
        if (score >= 90) 
            printf("A");
    else
        printf("B");
    else
        printf("F");
    return 0;
}