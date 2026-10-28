n = 0
score = 0
sum = 0

print("종료하려면 음수를 입력하세요.")
while score > 0:
    score = int(input("성적을 입력하세요: "))
    if score > 0:
        sum = sum + score
        n = n+1
if n > 0:
    average = sum/n
pprint("평균은 %f입니다." % average)