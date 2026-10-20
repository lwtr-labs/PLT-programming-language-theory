// 은행 입출금

#include <stdio.h>

void account(int amount) {
    static int balance = 0; // 한 번만 초기화됨

    if (amount > 0)
        printf("입금: %d원\t", amount);
    else
        printf("출금: %d원\t", -amount);

    balance += amount;
    printf("잔액: %d원\n", balance);
}

int main(void) {
    account(10000);
    account(50000);
    account(-10000);
    account(30000);

    return 0;
}