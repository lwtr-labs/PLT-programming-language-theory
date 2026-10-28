# 함수의 다양한 매개변수

def print_report(name, age=20, *scores, **info):
    print(f"--- {name} 학생 성적표 ---")
    print(f"나이: {age}")
    
    if scores:
        total = sum(scores)
        avg = total / len(scores)
        print(f"시험 점수들: {scores} (평균: {avg:.2f})")
        
        for key, value in info.items():
            print(f"{key}: {value}")
        print("-" * 30)
        
print_report("홍길동", 23, 95, 88, 92, 전공="컴공", 좌우명="열공하자")