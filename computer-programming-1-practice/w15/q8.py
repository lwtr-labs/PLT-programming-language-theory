try:
    username = input("ID 입력: ")
    
    with open("users.txt", "r", encoding="utf-8") as file:
        user_list = file.read().splitlines()
        
    if username not in user_list:
        raise ValueError("등록되지 않은 ID입니다.")
    
except FileNotFoundError:
    print("오류: 회원 목록(users.txt)이 존재하지 않습니다.")
    
except ValueError as e:
    print(f"로그인 실패: {e}")

else:
    print(f"로그인 성공! 환영합니다, {username}님!")

finally:
    print("...로그인 시스템 종료...")