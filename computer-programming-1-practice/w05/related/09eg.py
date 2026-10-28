fact=1.0
n = int(input("정수를 입력하세요: "))

for i in range(1, n+1):
    fact = fact * i
print(f"{n}!은 {fact}이다.")