todo_list = []

print("--- 오늘 할 일 ---")

while True:
    task = input("할 일 입력 (다 적었으면 '끝' 입력): ")
    
    if task == "끝":
        break
    
    todo_list.append(task)
    print(f"현재 목록: {todo_list}")
    
print("\n--- 오늘의 할 일 정리 완료! ---")
print(f"총 {len(todo_list)}개의 계획이 있습니다.")
print(f"목록: {todo_list}")