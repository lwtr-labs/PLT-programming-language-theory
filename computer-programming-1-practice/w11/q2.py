s = []
while True:
    num = int(input("숫자를 입력하세요(종료는 -1): "))
    if num == -1:
        break
    s.append(num)
    
print("생성된 리스트:", s)

for i in range(len(s)):
    if s[i] % 2 == 0:
        s[i] = "짝수"
    else:
        s[i] = "홀수"
        
print("변경된 리스트:", s)