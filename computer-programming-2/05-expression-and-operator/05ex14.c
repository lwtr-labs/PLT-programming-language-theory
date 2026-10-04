// 예제 #14. 10진수를 2진수로 출력

#include <stdio.h>

unsigned int multi(unsigned int input_number, int n); // 자릿수가 늘면... 에 대한 해답

int main(void) {
    int i;

    // unsigned int input_int;
    

    // printf("0부터 42억 사이의 정수를 입력하세요: ");
    // scanf("%u", &input_int);

    // for (i = 32; i > -1; i--) {
    //     printf("%d", (input_int & multi(2, i)) ? 1 : 0);
    // }
    // printf("\n");

    int x;
    
    printf("\n-- 교재 --\n");

    printf("0부터 255 사이의 정수를 입력하세요: ");
    scanf("%d", &x);

    printf("2진수: ");
    printf("%d", (x & 128) ? 1 : 0);
    printf("%d", (x & 64)  ? 1 : 0);
    printf("%d", (x & 32)  ? 1 : 0);
    printf("%d", (x & 16)  ? 1 : 0);
    printf("%d", (x & 8)   ? 1 : 0);
    printf("%d", (x & 4)   ? 1 : 0);
    printf("%d", (x & 2)   ? 1 : 0);
    printf("%d", (x & 1)   ? 1 : 0);

    // else
    // printf("\n-- 반복문과 함수로 --\n");
    // printf("2진수: ");
    // for (i = 7; i >= 0; i--) {
    //     printf("%d", (x & multi(2, i)) ? 1 : 0);
    // }
    // printf("\n");
    

}

unsigned int multi(unsigned int input_number, int n)
{
    int i;
    unsigned int result = 1;

    if (n == 0) return 1;
    for (i = 0; i < n; i ++) result *= 2;
    return result;
}

