rec_count = 0

def fib_rec(n):
    global rec_count
    rec_count += 1
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fib_rec(n-1) + fib_rec(n-2)
    

dp_table = {0: 0, 1: 1}
dp_count = 0

def fib_dp(n):
    global dp_count
    dp_count += 1
    if n not in dp_table:
        dp_table[n] = fib_dp(n-1) + fib_dp(n-2)
    return dp_table[n]

n = int(input("정수를 입력하세요: "))

result_rec = fib_rec(n)
result_dp = fib_dp(n)

print(f"\nfib({n}) = {result_rec}")
print(f"재귀: {rec_count}회 호출")
print(f"DP: {dp_count}회 호출")