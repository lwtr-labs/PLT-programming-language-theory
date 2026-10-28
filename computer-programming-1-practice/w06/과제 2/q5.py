MAX_LENGTH = 20

def analyze_post(text):
    char_count = len(text)
    word_count = len(text.split())
    
    is_safe = char_count <= MAX_LENGTH
    
    return char_count, word_count, is_safe

input_text = input("게시글 내용을 입력하세요: ")

length, words, safe = analyze_post(input_text)

print(f"글자 수: {length} / 단어 수: {words}")
print(f"업로드 가능 여부: {safe}")