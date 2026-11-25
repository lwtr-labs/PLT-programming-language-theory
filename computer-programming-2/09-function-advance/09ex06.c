#include <stdio.h>

void hanoi_tower(int n, char from, char tmp, char to);

int main(void) {
    hanoi_tower(4, 'A', 'B', 'C');  // 원판 4개를 A에서 C로 이동
    return 0;
}

// n개의 원판을 from에서 to로 이동 (tmp는 보조 막대)
void hanoi_tower(int n, char from, char tmp, char to) {
    if (n == 1) {   // 종료 조건: 원판이 1개인 경우
        printf("원판 1을 %c에서 %c로 옮긴다.\n", from, to);
    } else {
        hanoi_tower(n - 1, from, to, tmp);  // 위쪽 n - 1개를 보조 막대로 이동
        printf("원판 %d을 %c에서 %c로 옮긴다.\n", n, from, to); // 가장 큰 원판 이동 
        hanoi_tower(n - 1, tmp, from, to);  // n - 1개를 목적 막대로 이동
    }
}