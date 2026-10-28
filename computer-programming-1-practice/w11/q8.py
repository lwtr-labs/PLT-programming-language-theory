import random

SIZE = int(input("판 크기를 입력하세요 (예: 3): "))
board = [[' ' for _ in range(SIZE)] for _ in range(SIZE)]
turn = random.choice(["사람", "컴퓨터"])
print(f"[{turn}] 선공으로 시작! (판 크기: {SIZE}x{SIZE})")

while True:
    for i in range(SIZE):
        print(" " +" | ".join(board[i]) + " ")
        if i < SIZE - 1:
            print("-" * (SIZE * 4 - 1))
    
    winner = None
    for p in ['X', 'O']:
        row_win = any(all(board[i][j] == p for j in range(SIZE)) for i in range(SIZE))
        col_win = any(all(board[i][j] == p for j in range(SIZE)) for i in range(SIZE))
        diag1_win = all(board[i][i] == p for i in range(SIZE))
        diag2_win = all(board[i][SIZE - 1 - i] == p for i in range(SIZE))
        if row_win or col_win or diag1_win or diag2_win:
            winner = p
            break
        
    if winner:
        print(f"\n[{winner}] 승리!")
        break
    if all(' ' not in row for row in board):
        print("\n무승부!")
        break
    
    if turn == "사람":
        try:
            r, c = map(int, input(f"위치 입력(0~{SIZE-1} 사이 행 열): ").split())
            if board[r][c] == ' ':
                board[r][c] = 'X'
                turn = "컴퓨터"
            else: print("이미 있는 자리!")
        except:
            print(f"0부터 {SIZE-1} 사이의 두 숫자를 입력하세요.")
    else:
        empty = [(r, c) for  r in range(SIZE) for c in range(SIZE) if board[r][c] == ' ']
        r, c = random.choice(empty)
        board[r][c] = 'O'
        print(f"컴퓨터가 {r}, {c}에 뒀습니다.")
        turn = "사람"