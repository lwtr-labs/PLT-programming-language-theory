def get_order():
        print("1. 아메리카노(3000)  2. 라떼(4000)  3. 에이드(5000)  4. 야삿추(3500)")
        choice = int(input("메뉴 번호를 선택하세요: "))
        return choice
        
def calculate_price(menu_num):
    if menu_num == 1:
        return 3000
    elif menu_num ==2:
        return 4000
    elif menu_num == 3:
        return 5000
    elif menu_num == 4:
        return 3500
    else:
        return 0
        
def print_receipt(price):
    if price > 0:
        print(f"결제하실 금액은 {price}원입니다. 감사합니다!")
    else:
        print("잘못된 메뉴 선택입니다. 다시 주문해주세요.")
            
def main():
    menu = get_order()
    total = calculate_price(menu)
    print_receipt(total)
        
if __name__ == "__main__":
    main()
    