#include <stdio.h>

void print_menu(void) {
    printf("=========================\n");
    printf("1. 입금\n");
    printf("2. 출금\n");
    printf("0. 종료\n");
    printf("=========================\n");
}

void account(int amount) {
    static int balance = 0;

    if (amount < 0 && -amount > balance) {
        printf("출금 실패: 잔액이 부족합니다.\n");
        printf("현재 잔액: %d원\n", balance);
        return;
    }
    balance += amount;
    if (amount > 0)
        printf("입금: %d원\t잔액: %d원\n", amount, balance);
    else
        printf("출금: %d원\t잔액: %d원\n", -amount, balance);
}

int main(void) {
    int menu;
    int amount;

    while (1) {
        print_menu();
        printf("메뉴 선택: ");
        scanf("%d", &menu);

        if (menu == 0)
            break;
        if (menu != 1 && menu != 2) {
            printf("잘못된 메뉴입니다.\n");
            continue;
        }

        printf("금액 입력: ");
        scanf("%d", &amount);
        if (menu == 1)
            account(amount);
        else
            account(-amount);
    }

    return 0;
}