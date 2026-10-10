// 예제 #19. 세 주사위의 합이 N인 모든 경우 찾기
#include <stdio.h>

int main(void) {
    int x, y, z, count = 0;

    int n;
    printf("세 주사위 눈의 합이 N 인 경우를 알아보세요.\n N: ");
    scanf("%d", &n);

    for (x = 1; x < 7; x++) {
        for (y = 1; y < 7; y++) {
            for (z = 1; z < 7; z++) {
                if (x + y + z == n) {
                    if (count == 0)
                        printf("(x, y, z)\n");
                    printf("(%d, %d, %d) ", x, y, z);
                    if (((count + 1) % 4) == 0)
                        printf("\n");
                    count += 1;
                }
            }
        }
    }

    printf("\n\n세 주사위 눈의 합이 N인 경우의 수는 %d개 입니다.\n", count);
}