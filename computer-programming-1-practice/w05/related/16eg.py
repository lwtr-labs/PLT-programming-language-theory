original = input('문자열을 입력하세요: ')
word = original.lower()
vowels = 0
consonants = 0

if len(original) > 0 and original.isalpha():
    for char in word:
        if char in 'aeiou':
            vowels = vowels + 1
        else:
            consonants = consonants + 1
    
print("모음 개수:", vowels)
print("자음 개수:", consonants)