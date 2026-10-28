lst = []

while True:
    value = int(input("성적을 입력하세요(종료는 -1): "))
    if value == -1:
        break
    lst.append(value)

if len(lst) > 0:
    total = sum(lst)
    avg = total / len(lst)
    count = 0
    for score in lst:
        if score >= 80:
            count = count + 1
            
    print(f"\n입력된 학생 수: {len(lst)}명")
    print(f"성적 평균: {avg:.2f}")
    print(f"최고점: {max(lst)}")
    print(f"최저점: {min(lst)}")
    print(f"80점 이상: {count}명")
else:
    print("입력된 성적이 없습니다.")