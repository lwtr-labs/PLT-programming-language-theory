status = "판매 불가"

def check_inventory(item_count):
    if item_count > 0:
        global status
        status = "판매 가능"
    print(f"현재 상태: {status}")
    
    for i in range(1, item_count + 1):
        last_num = i
    print(f"마지막으로 확인한 번호: {last_num}")
    
check_inventory(3)
print(status)