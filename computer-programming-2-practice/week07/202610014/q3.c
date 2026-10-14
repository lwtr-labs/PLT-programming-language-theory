#include <stdio.h>

void printMenu(void) {
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
    return (f_temp - 32.0) * 5.0 / 9.0;
}

int main(void) {
    int choice;
    double temp;
    while (1) {
        printMenu();
        scanf("%d", &choice);

        switch (choice) {
        case 1:   
            printf("섭씨: ");
            scanf("%lf", &temp);
            printf("화씨: %lf \n\n", C2F(temp));
            break;
        
        case 2:
            printf("화씨: ");
            scanf("%lf", &temp);
            printf("섭씨: %lf \n\n", F2C(temp));
            break;
            
        case 99:
            return 0;
            
        default:
            printf("잘못된 메뉴입니다.\n\n");
            break;
        }
    }
    return 0;
}