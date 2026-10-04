// 예제 #16. 형변환 맛보기 

#include <stdio.h>

int main(void) {
    char c; int i; float f;

    c = 10000;          // 내림 변환 (char은 8비트이므로, 십진수 10000값에서 8비트까지만 인식. 그보다 큰 비트수는 버림)
    i = 1.23456 + 10;   // 내림 변환 (소수점 자리는 그냥 잘린다. 반올림 없음)
    f = 10 + 20;        // 올림 변환
    printf("c = %d, i = %d, f = %f\n", c, i, f);

    return 0;
}

// overflow in conversion from 'int' to 'char' changes value from '10000' to '16' [-Woverflow]