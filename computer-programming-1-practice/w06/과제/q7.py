import random

tries = 0
number = random.randint(1, 100)

print("- 게임 시작 -")

while tries < 10:
    guess = int(input("숫자 입력: "))
    tries = tries + 1
    
    if guess < number:
        print("UP!")
    elif guess > number:
        print("DOWN!")
    else:
        break
    
if guess == number:
    print(f"축하합니다! 시도횟수: {tries}")
else:
    print(f"아쉽네요. 정답: {number}")