#include <stdio.h>
#define SIZE 10

int main(void) {
    char yesno;
    int seat_no;
    int seats[SIZE] = { 0 };

    while (1) {
        printf("예약하시겠습니까? (y 또는 n) ");
        scanf(" %c", &yesno);
        if (yesno == 'n')
            break;
        if (yesno == 'y') {
            printf("\n================= 좌석 현황 =================\n");
            printf("[좌석 번호] ");
            for (int i = 0; i < SIZE; i++)
                printf("%3d", i + 1);
            
            printf("\n[예약 상태] ");
            for (int i = 0; i < SIZE; i++)
                printf("%3c", seats[i] == 0 ? 'O' : 'X');
            
            printf("\n=============================================\n");
            printf("O: 예약 가능 / X: 예약 완료\n\n");


            while (1) {
                printf("좌석 번호 입력: ");
                scanf("%d", &seat_no);
                if (seat_no < 1 || seat_no > SIZE) {
                    printf("1부터 %d 사이의 숫자를 입력하세요.\n", SIZE);
                    continue;
                }
                else break;
            }
            if (seats[seat_no - 1] == 0) {
                seats[seat_no - 1] = 1;
                printf("예약되었습니다.\n\n");
            }
            else {
                printf("이미 예약된 자리입니다.\n\n");
            }        
        }
    }
    return 0;
}