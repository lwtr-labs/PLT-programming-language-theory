# 팩토리얼 함수

def factorial(n):
    result = 1
    for i in range(1, n+1):
        result *= i
    return result

n = int(input("---n팩토리얼 계산---\nn값을 일력하시오: "))

ans = factorial(n)

print(f"{n}! = {ans}")