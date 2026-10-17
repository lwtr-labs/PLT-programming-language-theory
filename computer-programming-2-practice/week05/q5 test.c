#include <stdio.h>

void print_binary(int n);
int n_sqr_m(int n, int m);


int main(void) {
    int x;

Input:
    printf("0부터 255 사이의 정수를 입력하세요. (종료: -1)\n> ");
    scanf("%d", &x);

    if (x > 255 || x < -1) {
        printf("잘못된 범위입니다. 다시 입력해주세요.\n\n");
        goto Input;
    } else if (0 <= x && x < 256){
        printf("%3s %3s %3s %3s %3s %3s %3s %3s\n", "128", "64", "32", "16", "8", "4", "2", "1");
        print_binary(x);
        goto Input;
    } else {
        printf("프로그램을 종료합니다.\n");
    } 
    return 0;
}

void print_binary(int n) {
    for (int i = 7; i >= 0; i--) {
        printf("%3d ", (n & n_sqr_m(2, i)) ? 1 : 0);
    }
    printf("\n");
}

int n_sqr_m(int n, int m) {
    int result = 1;

    if (m == 0) return result;

    for (int i = 0; i < m; i++) {
        result *= 2;
    }

    return result;
}