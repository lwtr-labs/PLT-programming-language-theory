scores = [45, 99, 60, 72, 85, 56]

passed_plus = [min(s + 5, 100) if s >= 60 else s for s in scores]
grades = ["A" if s >= 90 else "B" for s in scores]

print("가산점 반영:", passed_plus)
print("등급 반영:", grades)