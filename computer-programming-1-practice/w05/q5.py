# ‐ 6은 대박, 5는 길운, 4와 3은 평범, 나머지는 조심이 나오도록 조건을 수정
# ‐ 랜덤으로 던져서 나온 주사위 값을 함께 출력하도록!


import random

print("주사위를 던져 당신의 운명을 확인하세요!")
dice = random.randint(1, 6)

if dice == 6:
    print(f"[{dice}] 대박! 오늘은 뭘 해도 되는 날입니다.")
elif dice == 5:
    print(f"[{dice}] 길운! 복권을 사보셔도 좋겠네요.")
elif dice == 4 or dice == 3:
    print(f"[{dice}] 평범! 무난한 하루가 예상됩니다.")
else:
    print(f"[{dice}] 조심! 오늘은 과제만 열심히 하세요.")
    