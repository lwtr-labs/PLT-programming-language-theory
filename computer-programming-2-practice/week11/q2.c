#include <stdio.h>
#define SIZE 10

int main(void) {
    int key, i;
    int list[SIZE] = { 3, 7, 2, 9, 5, 1, 8, 4, 10, 6 };

    printf("탐색할 값을 입력하세요: ");
    scanf("%d", &key);

    for (i = 0; i < SIZE; i++) {
        if (list[i] == key) {
            printf("탐색 성공! 인덱스: %d\n", i);
            break;
        }
    }

    if (i == SIZE)
        printf("해당 데이터가 존재하지 않습니다.\n");

    printf("탐색 종료\n");
    
    return 0;
}