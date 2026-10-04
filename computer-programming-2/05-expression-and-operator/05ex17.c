// 예제 #17. 자동 형변환과 명시적 형변환

#include <stdio.h>

int main(void) {
    int i;
    double f;

    f = 5 / 4;                  // 정수 나눗셈: 5 / 4 = 1 -> 1.0 저장
    printf("%f\n", f);

    f = (double)5 / 4;          // 5를 double로 변환 -> 실수 나눗셈 결과
    printf("%f\n", f);

    f = 5.0 / 4;                // 5.0이 double이므로 실수 나눗셈 -> 1.25
    // printf("%d\n", sizeof(5.0));    // 8byte -> double
    printf("%f\n", f);

    f = (double)5 / (double)4;  // 두 값을 double로 변환 -> 1.25
    printf("%f\n", f);

    i = 1.3 + 1.8;              // 3.1을 int에 저장 -> 소수 부분이 버려져서 3
    printf("%d\n", i);

    i = (int)1.3 + (int)1.8;    // 1 + 1 -> 2
    printf("%d\n", i);

    return 0;
}