#include <stdio.h>

int main(void) {
    char name[100];
    char address[100];

    printf("이름을 입력하세요: ");
    scanf("%99s", name);
    printf("현재 거주지를 입력하세요: ");
    scanf("%99s", address);

    printf("안녕하세요, %s에 사는 %s씨.\n", address, name);

    return 0;
}