s = input('문자열을 입력하세요: ')
vowels = "aeiouAEIOU"
result = ""

for letter in s:
    if letter not in vowels:
        result += letter
print(result)