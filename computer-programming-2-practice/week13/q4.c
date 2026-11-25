#include <stdio.h>
#define SIZE 100

void print_state(int *numbers, int *top) {
    printf("  누적: [");
    for (int *p = numbers; p < top; p++) {
        printf("%d", *p);
        if (p + 1 < top) printf(", ");
    }
    printf("]  (top은 %d번 칸)\n\n", (int)(top - numbers));
}

int main(void) {
    int numbers[SIZE];
    int *top = numbers;
    int k, num, sum = 0;

    do {
        printf("입력할 숫자의 개수(k, 1~%d): ", SIZE);
        scanf("%d", &k);
        if (k < 1 || k > SIZE)
            printf("k는 1~%d 사이로 입력해야 합니다.\n", SIZE);
    } while (k < 1 || k > SIZE);

    for (int i = 0; i < k; i++) {
        printf("%d번째(0: 직전 기록 취소): ", i + 1);
        scanf("%d", &num);
        if (num == 0) {
            if (top > numbers) {
                top--;
                printf("  -> %d 취소\n", *top);
            }
        }
        else {
            *top = num;
            top++;
            printf("  -> %d 추가\n", num);
        }
        print_state(numbers, top);
    }
    for (int *p = numbers; p < top; p++)
        sum += *p;
    printf("남은 숫자의 합: %d\n", sum);
    return 0;
}