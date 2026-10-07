// 예제 #3. 카운트다운

#include <stdio.h>

int main(void) {
    int n;

    printf("카운트다운 시작 숫자: ");
    scanf("%d", &n);

    while (n > 0) {
        printf("%d ", n);
        n--;
    }
    printf("발사!\n");

    return 0;
}