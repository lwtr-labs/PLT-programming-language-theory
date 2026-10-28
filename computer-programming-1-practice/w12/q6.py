def count_unique_words(text):
    words = text.split()
    clean_words = [word.lower() for word in words]
    unique_words = set(words)
    return len(words), unique_words

user_input = input("문자열을 입력하세요: ")

total_count, unique_set = count_unique_words(user_input)

print("입력된 총 단어 개수:", total_count)
print("중복 제거된 고유 단어 개수:", len(unique_set))
print("고유 단어 목록:", unique_set)

