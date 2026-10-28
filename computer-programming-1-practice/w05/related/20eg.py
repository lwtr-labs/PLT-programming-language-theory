import random

menus = ["학식", "편의점", "마라탕", "제육볶음", "돈가스", "샌드위치"]

print("--- 뭐먹지? ---")

while True:
    pick = random.choice(menus)
    print(f"\n추천 메뉴는 [{pick}] 입니다!")
    answer = input("마음에 드시나요? (y/n): ")
    
    if answer.lower() == "y":
        print("맛있게 드세요! 프로그램을 종료합니다")
        break
    else:
        print("... 다른 메뉴를 골라볼게요.")