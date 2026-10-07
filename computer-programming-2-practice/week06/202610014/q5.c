#include <stdio.h>

int main(void) {
    double principal = 50000;
    double target = 100000;
    double rate = 0.04;

    double simple = principal;
    double compound = principal;

    int simpleYear = 0;
    int compoundYear = 0;

    while (simple < target) {
        simple += principal * rate;
        simpleYear++;
    }

    while (compound < target) {
        compound += compound * rate;
        compoundYear++;
    }

    printf("단리: %d년 후 목표 달성\n", simpleYear);
    printf("복리: %d년 후 목표 달성\n", compoundYear);

    return 0;
}