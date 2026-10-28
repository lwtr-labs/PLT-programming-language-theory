avengers = []
print("초기 팀:", avengers)

avengers.append("아이언맨")
avengers.append("토르")
avengers.append("헐크")
print("팀원 모집 후:", avengers)

avengers.insert(1, "캡틴 아메리카")
print("캡틴 합류 후:", avengers)

avengers[3] = "스파이더맨"
print("팀원 교체 후:", avengers)

avengers.remove("토르")
print("토르 제외 후:", avengers)

retired_hero = avengers.pop()
print(f"은퇴한 히어로: {retired_hero}")
print("최종 팀 상태:", avengers)
