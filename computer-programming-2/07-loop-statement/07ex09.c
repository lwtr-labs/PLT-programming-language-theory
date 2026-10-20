// 예제 #9. 단리와 복리

#include <stdio.h>

int main(void) {
    double principal = 50000;
    double rate = 0.04;
    double simple = principal;
    double compound = principal;
    int year = 0;

    while (year < 10) {
        simple += principal * rate;
        compound += compound * rate;
        year++;

        printf("%2d년 단리: %8.0f만 원  복리: %8.0f만 원\n",
               year, simple, compound);
    }

    return 0;
}