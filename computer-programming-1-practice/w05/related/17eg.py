raw = input('계좌번호를 입력하세요: ')
processed = ""

for c in raw:
    if c != "-":
        processed = processed + c
        
print(processed)