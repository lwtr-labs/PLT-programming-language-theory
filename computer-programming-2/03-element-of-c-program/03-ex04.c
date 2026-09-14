// 예제 #4. 한 번에 여러 값을 입출력하는 덧셈

// 두 개의 수를 각각 입력하지 않고 한 번에 입력하려면?
// 출력도 좀 더 다양하게 하고 싶다면?

#include <stdio.h>

int main(void) {
    int x;      // 첫 번째 정수 저장
    int y;      // 두 번째 정수 저장
    int sum;    // 두 정수의 합 저장

    printf("정수 두 개를 입력하세요: ");    // 입력 안내 메시지 출력
    scanf("%d %d", &x, &y); // 두 수를 순서대로 x, y에 저장

    sum = x + y;
    printf("두 수의 합: %d\n", sum);    // sum의 값을 10진수로 출력

    return 0;
}