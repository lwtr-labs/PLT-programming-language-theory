// 예제 #24. 라스베이가스 구경(도박사의 파산 문제)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define START   50
#define GOAL    250
#define TRAILS  100

int main(void) {
    int money;
    int wins = 0;
    int i;
    srand(time(NULL));

    i = 0;
    while (i < TRAILS) {
        money = START;


        while (money > 0 && money < GOAL) {
            if (rand() % 2 == 0)    
                money++;
            else
                money--;
        }
        if (money == GOAL)
            wins++;
        i++;
    }
    printf("%d번 중 %d번 목표 달성\n", TRAILS, wins);
    printf("성공률: %.1f%%\n", (double)wins / TRAILS * 100);
    return 0;
}
    
