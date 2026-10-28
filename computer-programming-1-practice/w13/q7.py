text = input("분석할 문장: ").lower()

char_counts = {}

for char in text:
    if char != " ":
        char_counts[char] = char_counts.get(char, 0) + 1
        
word_counts = {}

for word in text.split():
    word_counts[word] = word_counts.get(word, 0) + 1
    
print("문자 수: ", char_counts)
print("단어 수: ", word_counts)
