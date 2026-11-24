#include <stdio.h>
#define SIZE 100 
// 제로: 포인터 기반 숫자 기록 및 취소

// 현재 기록 상태를 보여주는 함수
void print_state(int *numbers, int *top) {
    printf("  기록: [");
    for (int *p = numbers; p < top; p++) {
        printf("%d", *p);
        if (p + 1 < top) printf(", ");
    }
    printf("] (top은 %d번 칸)\n\n", (int)(top - numbers));
}

int main(void) {
    int numbers[SIZE];      // 기록한 숫자를 저장할 배열
    int *top = numbers;     // 다음 숫자를 저장할 위치를 가리키는 포인터
    int k, num, sum = 0;
    printf("입력할 숫자의 개수(k): ");
    scanf("%d", &k);

    for (int i = 0; i < k; i++) {
        printf("%d번째 숫자(0이면 마지막 기록 취소): ", i + 1);
        scanf("%d", &num);
        if (num == 0) {
            if (top > numbers) {
                top--;  // 한 칸 뒤로 이동 (마지막 숫자 취소)
                printf("  -> %d 취소\n", *top);
            }
        }
        else {
            *top = num; // 현재 위치에 숫자 저장
            top++;      // 다음 위치로 이동
            printf("  -> %d 기록\n", num);
        }
        print_state(numbers, top);
    }
    for (int *p = numbers; p < top; p++)
        sum += *p;
    printf("최종 남은 숫자의 합: %d\n", sum);
    return 0;
}