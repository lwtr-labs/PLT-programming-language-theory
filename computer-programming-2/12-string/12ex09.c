#include <stdio.h>
#include <string.h>

int main(void) {
    char name[100];
    char address[100];

    printf("이름을 입력하세요: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("현재 거주지를 입력하세요: ");
    fgets(address, sizeof(address), stdin);
    address[strcspn(address, "\n")] = '\0';

    printf("안녕하세요, %s에 사는 %s씨.\n", address, name);
    return 0;
}