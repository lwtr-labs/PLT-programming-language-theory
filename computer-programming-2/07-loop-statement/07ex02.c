// 예제 #2. while 구구단

#include <stdio.h>

int main(void) {
    int n;
    int i = 1;

    printf("몇 단을 출력할까요? ");
    scanf("%d", &n);

    while (i <= 9) {
        printf("%d * %d = %2d \n", n, i, n * i);
        i++;
    }

    return 0;
}