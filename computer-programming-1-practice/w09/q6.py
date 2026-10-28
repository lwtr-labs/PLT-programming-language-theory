stack = []

for i in range(5):
    f = input("과일을 입력하세요: ")
    stack.append(f)
    
print(stack)

for i in range(len(stack)):
    print(stack.pop())
    
print(stack)