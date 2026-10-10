// 예제 #18. 구구단 출력

#include <stdio.h>

int main(void) {
    int dan, i;

    for (i = 1; i < 10; i++) {
        for (dan = 2; dan < 10; dan++) {
            printf("%1d * %1d = %2d\t", dan, i, dan*i);
        }
        printf("%\n");
    }

    return 0;
}