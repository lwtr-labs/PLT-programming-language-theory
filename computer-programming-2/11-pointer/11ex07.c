// 배열 주소를 포인터에 연결하기

#include <stdio.h>

int main(void) {
    int a[] = { 10, 20, 30, 40, 50 };

    printf("a = %p\n", a);                  // 첫 번째 요소의 주소
    printf("a + 1 = %p\n", a + 1);          // 두 번째 요소의 주소
    
    printf("*a = %d\n", *a);                // 첫 번째 요소의 값
    printf("*(a + 1) = %d\n", *(a + 1));    // 두 번째 요소의 값

    return 0;
}