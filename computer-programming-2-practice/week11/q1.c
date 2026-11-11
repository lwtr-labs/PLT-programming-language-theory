#include <stdio.h>
#define SIZE 10

void print_arr(int list[]);

int main(void) {
    int list[SIZE] = { 3, 2, 9, 7, 1, 4, 8, 0, 6, 5 };
    int temp, least;

    printf("정렬 전: ");
    print_arr(list);

    for (int i = 0; i < SIZE - 1; i++) {
        least = i;

        for (int j = i + 1; j < SIZE; j++)
            if (list[j] < list[least])
                least = j;
        
        temp = list[i];
        list[i] = list[least];
        list[least] = temp;
    }

    printf("정렬 후: ");
    print_arr(list);

    return 0;
}

void print_arr(int list[]) {
    for (int i = 0; i < SIZE; i++)  
        printf("%d ", list[i]);
    printf("\n");
}