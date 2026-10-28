size = 10
table = [[0 for _ in range(size)] for _ in range(size)]

def init_chkboard(mylist):
    for row in range(len(mylist)):
        for col in range(len(mylist[0])):
            if (row + col) % 2 == 0:
                mylist[row][col] = 1
                
def print_colored_board(mylist):
    for row in mylist:
        for cell in row:
            if cell == 1:
                print("\033[94m■", end="")
            else:
                print("\033[97m□", end="")
                
        print()
            
init_chkboard(table)
print_colored_board(table)