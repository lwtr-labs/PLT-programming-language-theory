#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 6
void make_lotto(int *p, int n);

int main(void) {
    int lotto[SIZE];

    srand(time(NULL));
    make_lotto(lotto, SIZE);

    printf("로또 번호: ");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", lotto[i]);
    
        return 0;
}

void make_lotto(int *p, int n) {
    int num, duplicate, temp, least;

    for (int i = 0; i < n; i++) {
        do {
            num = rand() % 45 + 1;
            duplicate = 0;

            for (int j = 0; j < i; j++) 
                if (*(p + j) == num) {
                    duplicate = 1;
                    break;
                }
        } while (duplicate);

        *(p + i) = num;
    }

    for (int i = 0; i < SIZE - 1; i++) {
        least = i;

        for (int j = i + 1; j < SIZE; j++) 
            if (p[j] < p[least])
                least = j;

        temp = p[i];
        p[i] = p[least];
        p[least] = temp;
    }
}