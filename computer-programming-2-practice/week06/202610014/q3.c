#include <stdio.h>

int main(void) {
    int command, prog_no;

    printf("명령 번호를 입력하세요(1: 시작, 2: 일시정지, 3: 종료): ");
    scanf("%d", &command);

    switch (command) {
    case 1:
        printf("어떤 프로그램을 시작하시겠습니까?(1: ChatGPT, 2: Gemini, 3: Claude) >> ");
        scanf("%d", &prog_no);
        printf("%d번 프로그램을 시작합니다.\n", prog_no);
        break;
    case 2:
        printf("프로그램을 일시정지합니다.\n");
        break;
    case 3:
        printf("프로그램을 종료합니다.\n");
        break;
    default:
        printf("잘못된 명령입니다.\n");
    }
    return 0;
}