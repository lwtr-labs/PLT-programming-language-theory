#include <stdio.h>
#define SIZE 7

int main(void) {
    int maze[SIZE][SIZE] = { {1,0,1,1,1,1,1},
                             {1,0,0,0,1,0,1},
                             {1,0,1,0,1,0,1},
                             {1,0,1,0,0,0,1},
                             {1,0,1,1,1,0,1},
                             {1,0,0,0,0,0,1},
                             {1,1,1,1,1,0,1} };
    int row = 0, col = 1;   // 시작 입구(위치)
    int next_row, next_col;
    char move;
    while (1) {
        printf("\n===== 미로 탈출 =====\n");
        // 미로와 현재 위치 출력
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                if (i == row && j == col) 
                    printf("P ");
                else if (i == SIZE - 1 && j == SIZE - 2)
                    printf("E ");
                else 
                    printf("%c ", maze[i][j] == 1 ? '#' : '.');
            }
            printf("\n");
        }
        // 출구 도착 확인
        if (row == SIZE - 1 && col == SIZE - 2) {
            printf("탈출 성공!\n");
            break;
        }
        printf("이동 (W:위 A:왼쪽 S:아래 D:오른쪽): ");
        scanf(" %c", &move);
        next_row = row;
        next_col = col;
        // 이동 방향에 따라 다음 위치 계산
        if (move == 'w' || move == 'W')
            next_row--;
        else if (move == 's' || move == 'S')
            next_row++;
        else if (move == 'a' || move == 'A')
            next_col--;
        else if (move == 'd' || move == 'D')
            next_col++;
        else {
            printf("잘못된 입력입니다.\n");
            continue;
        }
        // 배열 범위와 벽 확인
        if (next_row < 0 || next_row >= SIZE || 
            next_col < 0 || next_col >= SIZE || 
            maze[next_row][next_col] == 1) {
            printf("이동할 수 없습니다.\n");
            continue;
        }
        row = next_row;
        col = next_col; 
     
    }
    return 0;
}