import random

tries = 0
number = random.randint(1, 100)

print("[게임 시작] 1부터 100 사이의 숫자를 맞추세요!")

while tries < 10:
    guess = int(input("숫자 입력: "))
    tries = tries + 1
    
    if guess < number:
        print("UP! (더 높은 숫자예요.)")
    elif guess > number:
        print("DOWN! (더 낮은 숫자예요.)")
    else:
        break
    
if guess == number:
    print(f"축하합니다! 시도횟수: {tries}")
else:
    print(f"아쉽네요. 정답은 {number}였습니다.")