#include <stdio.h>

#define EXCHANGE_RATE 1380.0

int main(void) {
    const double FEE_RATE = 0.02;
    double dollar;
    double won;
    double fee;
    double total;

    printf("달러 금액: ");
    scanf("%lf", &dollar);

    won = dollar * EXCHANGE_RATE;
    fee = won * FEE_RATE;
    total = won + fee;

    printf("환율: %.1f원\n", EXCHANGE_RATE);
    printf("환전 금액: %.0f원\n", won);
    printf("수수료율: %.0f%%\n", FEE_RATE * 100);
    printf("수수료: %.0f원\n", fee);
    printf("최종 금액: %.0f원\n", total);

    return 0;
}

