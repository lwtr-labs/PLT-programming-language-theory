sources = {"B4":"Before", "TX":"Thanks",
           "BBL":"Be Back Later",
           "BCNU":"Be Seeing You",
           "HAND":"Have A Nice Day"}

message = input('번역할 문장: ')

result = message
for short, full in sources.items():
    result = result.replace(short, full)
    
print("번역 결과:", result)
