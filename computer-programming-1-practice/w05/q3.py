credits = int(input("이수 학점: "))
gpa = float(input("평점: "))
semesters = int(input("등록 학기: "))

if 6 <= semesters <= 7 and credits >= 130 and gpa >= 4.0:
    print("조기 졸업 가능!")

elif semesters >= 8 and credits >= 130 and gpa >= 1.75:
    print("졸업 가능!")
    
else:
    print("졸업 불가!!!")