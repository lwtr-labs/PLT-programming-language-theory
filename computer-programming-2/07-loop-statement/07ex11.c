// 예제 #11. 메뉴 선택하기

#include <stdio.h>

int main(void) {
    int i = 0;

    do {
        printf("1. 새 파일 생성하기\n");
        printf("2. 기존 파일 열기\n");
        printf("3. 파일 저장하기\n");
        printf("--------------------\n");
        printf("메뉴를 선택하세요: ");
        scanf("%d", &i);
    } while(i < 1 || i > 3);

    printf("선택된 메뉴 = %d\n", i);
    return 0;
}