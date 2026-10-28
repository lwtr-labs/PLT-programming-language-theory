# 랜덤 ID 생성기

import random

def genID():
    adjectives = ["Fast", "Happy", "Smart", "Cool", "Lucky", "Brave"]
    nouns = ["Tiger", "Apple", "Nvidia", "Falcon", "Wizard", "Panda"]
    
    adj = random.choice(adjectives)
    noun = random.choice(nouns)
    
    num = random.randint(100, 999)
    
    return f"{adj}{noun}{num}"

print(f"추천 아이디 1: {genID()}")
print(f"추천 아이디 2: {genID()}")
print(f"추천 아이디 3: {genID()}")