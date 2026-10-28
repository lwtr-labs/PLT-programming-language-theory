i = 1
n = int(input("n= "))
factorial = 1

if n <= 0 :
    print("계산할 수 없는 값입니다.")
else:
    while (i <= n):
        factorial = factorial * i
        i = i + 1
    print("%d!은 %d입니다." %(n, factorial))
    
    
