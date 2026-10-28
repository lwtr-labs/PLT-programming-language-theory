x = int(input("정수를 입력하세요(큰수): "))
y = int(input("정수를 입력하세요(작은수): "))

a, b = x, y

while (y != 0):
    r = x%y
    x, y = y, r
    
print("최대 공약수는 %d입니다." % x)

lcm = (a*b) // x
print("최소 공배수는 %d입니다." %lcm)