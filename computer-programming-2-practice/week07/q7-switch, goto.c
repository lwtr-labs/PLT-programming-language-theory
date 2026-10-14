#include <stdio.h>

void print_menu(void);
void account(int amunt);

int main(void) {
    int menu;
    int amount;

input:        
    print_menu();
    printf("메뉴 선택: ");
    scanf("%d", &menu);

    switch (menu) {
    case 0:
        break;
    case 1:
        printf("금액 입력: ");
        scanf("%d", &amount);
        account(amount);
        goto input;

    case 2:
        printf("금액 입력: ");
        scanf("%d", &amount);
        account(-amount);
        goto input;

    default:
        printf("잘못된 메뉴입니다.\n");
        goto input;
    }
    return 0;
}

void print_menu(void) {
    printf("=========================\n");
    printf("1. 입금\n");
    printf("2. 출금\n");
    printf("0. 종료\n");
    printf("=========================\n");
}

void account (int amount) {
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