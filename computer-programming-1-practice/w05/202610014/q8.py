count = 0
score = 0
total = 0

print("종료하려면 음수를 입력하세요.")
while score >= 0:
    score = float(input("성적을 입력하세요: "))
    if score >= 0:
        total = total + score
        count = count + 1
if count > 0:
    average = total/count
print("평균은 %.2f입니다." %average)