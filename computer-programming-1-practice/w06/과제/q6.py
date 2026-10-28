s = input("사용할 식별자를 입력하세요: ")
allowed_chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_"
is_valid =True

if s == "":
    is_valid = False
elif s[0] in "0123456789":
    is_valid = False
else:
    for char in s:
        if char not in allowed_chars:
            is_valid = False
            break
        
if is_valid:
    print(f"{s}: 사용 가능")
else:
    print(f"{s}: 사용 불가")