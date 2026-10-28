while True:
    n = int(input("정수를 입력하세요: "))
    
    if n >= 0:
        break
    
    print("양수만 계산할 수 있습니다.")
    
def fib(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fib(n-1) + fib(n-2)
    
print(f"{n}번째 피보나치 수는 {fib(n)}입니다.")