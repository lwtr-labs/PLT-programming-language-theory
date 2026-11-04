#include <stdio.h>

int main(void) {
    int scores[] = { 1, 2, 3, 4, 5, 6 };
    int size = sizeof(scores) / sizeof(scores[0]);

    printf("sizeof(scores) = %d\n", sizeof(scores));
    printf("sizeof(scores[0]) = %d\n", sizeof(scores[0]));
    printf("size = %d\n", size);

    for (int i = 0; i < size; i++)
        printf("%d ", scores[i]);
    printf("\n");

    return 0;
}