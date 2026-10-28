string = input("문자열을 입력하세요: ")

cleaned_string = ""
for char in string:
    if char.isalnum():
        cleaned_string += char.lower()
        
reversed_string = cleaned_string[::-1]

if cleaned_string == reversed_string:
    print("회문입니다.")
else:
    print("회문이 아닙니다.")
    