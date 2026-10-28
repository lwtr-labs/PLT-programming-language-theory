count = 0

def hanoi(n, start, end, bypass):
    global count
    
    if n == 1:
        count += 1
        print(f"원판 1: {start} --> {end} (누적: {count}회)")
        return
    
    hanoi(n-1, start, bypass, end)
    count += 1
    print(f"원판 {n}: {start} --> {end} (누적: {count}회)")
    hanoi(n-1, bypass, end, start)
    
n = int(input("원판의 개수: "))
hanoi(n, 'A', 'C', 'B')

print("-"*30)
print(f"최종 이동 횟수: {count}회")