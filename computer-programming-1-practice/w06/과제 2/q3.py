def check_registration(name, user_id):
    return f"{name}님, 아이디 '{user_id}'로 등록 완료되었습니다."

def get_lowercase_id(msg):
    lowers = "abcdefghijklmnopqrstuvwxyz"
    while True:
        value = input(msg)
        
        is_valid = True
        for char in value:
            if char not in lowers:
                is_valid = False
                break
            
        if is_valid and value != "":
            return value
        
        print('알파벳 소문자만 입력하세요.')
        
user_name = input('사용자 이름: ')
user_id = get_lowercase_id('아이디 입력: ')

result = check_registration(user_name, user_id)
print(result)