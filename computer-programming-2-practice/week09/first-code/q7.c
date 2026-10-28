#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lotto(void) {
    return (rand() % 45);
}

int main(void) {
    srand((unsigned)time(NULL));

    for(int i = 0; i < 6; i++) {
        printf("%d ", lotto());
    }

    printf("\n");
    return 0;
}