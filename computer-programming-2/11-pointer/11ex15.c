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
    int num, duplicate;

    for (int i = 0; i < n; i++) {
        do {
            num = rand() % 45 + 1;          // 1-45 사이의 난수 생성
            duplicate = 0;                  // 중복 여부 초기화

            // 앞서 생성한 번호들과 비교
            for (int j = 0; j < i; j++) {
                if (*(p + j) == num)
                    duplicate = 1;          // 중복 번호 발견
            }
        } while (duplicate);                // 중복이면 다시 생성
        *(p + i) = num;                     // 중복이 없으면 배열에 저장
    }
}