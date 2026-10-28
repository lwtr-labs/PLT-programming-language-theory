def encrypt(text, shift):
    encrypted_text = ""
    for char in text:
        if char.isalpha():
            char_code = ord(char)
            if char.islower():
                base = ord('a')
                encrypted_code = ((char_code - base + shift) % 26) + base
            else:
                base = ord('A')
                encrypted_code = ((char_code - base + shift) % 26) + base
            encrypted_text += chr(encrypted_code)
        else:
            encrypted_text += char
    return encrypted_text

input_text = input("원본 문자열 입력: ")
shift_amount = int(input("시프트 값 입력: "))

result = encrypt(input_text, shift_amount)
print("암호화 결과:", result)