#include <stdio.h>

void PrintMenu(void) {
    printf("메뉴를 선택하세요!\n");
    printf("====================\n");
    printf(" 1. 섭씨 -> 화씨\n");
    printf(" 2. 화씨 -> 섭씨\n");
    printf(" 99. 종료\n");
    printf("====================\n");
}

double C2F(double c_temp) {
    return 9.0 / 5.0 * c_temp + 32;
}

double F2C(double f_temp) {
    return (f_temp - 32) * 5.0 / 9.0;
}

int main(void) {
    int choice;
    double temp;
    while (1) {
        PrintMenu();
        scanf("%d", &choice);

        if (choice == 99) break;

        else if (choice == 1) {
            printf("섭씨: ");
            scanf("%lf", &temp);
            printf("화씨: %lf\n\n", C2F(temp));
        }
        else if (choice == 2) {
            printf("화씨: ");
            scanf("%lf", &temp);
            printf("섭씨: %lf\n\n", F2C(temp));
        }

        return 0;
    }
}