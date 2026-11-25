#include <stdio.h>
#define SIZE 10

int main(void) {
    char yesno;
    int seat_no;
    int seats[SIZE] = { 0 };

    while(1) {
        printf("예약하시겠습니까? (y 또는 n) ");
        scanf(" %c", &yesno);   // %c 앞 빈 칸: 쓰레기 공백을 건너뛰고 입력받게 해준다
        if (yesno == 'n')   // 'n'이면 while문 중단
            break;
        if (yesno != 'y')   // 'y'가 아니면 아래 코드를 무시하고, 다시 while문 아래 코드 실행
            continue;
        printf("\n================= 좌석 현황 =================\n");
        printf("[좌석 번호] ");
        for (int i = 0; i < SIZE; i++)
            printf("%3d", i + 1);
        
        printf("\n[예약 상태] ");
        for (int i = 0; i < SIZE; i++)
            printf("%3c", seats[i] == 0 ? 'O' : 'X');   // 빈 자리(0) 이면 O, 아니면 x

        printf("\n=============================================\n");
        printf("O: 예약 가능 / X: 예약 완료\n\n");

        printf("좌석 번호 입력: ");
        scanf("%d", &seat_no);

        if (seat_no < 1 || seat_no > SIZE) {
            printf("1부터 %d 사이의 숫자를 입력하세요.\n", SIZE);
            continue;
        }
        if (seats[seat_no - 1] == 0) {  // 사용자에게서 1~10사이의 값을 받았으므로
            seats[seat_no - 1] = 1;     // 예약 처리
            printf("예약되었습니다.\n\n");
        }
        else {
            printf("이미 예약된 자리입니다.\n\n");
        }
    }

    return 0;
}