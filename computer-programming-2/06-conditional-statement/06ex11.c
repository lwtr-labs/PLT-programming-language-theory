// 예제 #11. 잘못된 입력은 재입력받기

#include <stdio.h>

int main(void) {
    int score;

input:
    printf("점수를 입력하세요(0-100): ");
    scanf("%d", &score);

    if (score < 0 || score > 100) {
        printf("잘못된 점수입니다. 다시 입력하세요.\n\n");
        goto input;
    }

    printf("입력한 점수: %d\n", score);

    return 0;
}