#include <stdio.h>
#define YEARS 3
#define PRODUCTS 5
int total_sales(int sales[YEARS][PRODUCTS]);

int main(void) {
    // 연도별 5개 제품의 판매량
    int sales[YEARS][PRODUCTS] = { { 10, 20, 30, 40, 50 },
                                   { 15, 25, 35, 45, 55 }, 
                                   { 20, 30, 40, 50, 60 } };
    printf("3년간 총판매량: %d개\n", total_sales(sales));
    return 0;
}

int total_sales(int sales[YEARS][PRODUCTS]) {
    int total = 0;
    for (int y = 0; y < YEARS; y++) // 모든 연도와 제품의 판매량 합산
        for (int p = 0; p < PRODUCTS; p++)
            total += sales[y][p];
    return total;
}