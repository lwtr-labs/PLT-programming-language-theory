# 소수 찾기

def is_prime(n):
    for i in range(2, n):
        if n % i == 0:
            return False
        else:
            return True

n = int(input("소수 여부를 판단할 정수: "))
print(is_prime(n))