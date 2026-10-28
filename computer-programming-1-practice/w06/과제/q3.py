even_sum = 0
odd_sum = 0

n = int(input("어디까지 계산할까요? "))

for i in range(1, n+1):
    if i % 2 == 0:
        even_sum += i
    else:
        odd_sum += i
        
print(f"1부터 {n}까지 짝수의 합: {even_sum}")
print(f"1부터 {n}까지 홀수의 합: {odd_sum}")