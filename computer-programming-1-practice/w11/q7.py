scores = [
    [90, 80, 100],
    [70, 95, 80],
    [60, 75, 90],
    [85, 90, 85]
]

subjects = ["국어","영어","수학"]
by_subjects = [[row[i] for row in scores] for i in range(len(scores[0]))]

print("--- 과목별 점수 요약 ---")

for i in range(len(subjects)):
    print(f"{subjects[i]}: {by_subjects[i]}")
    