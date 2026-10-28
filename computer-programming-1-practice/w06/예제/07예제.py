# 온라인 주문 처리

def process_order(name, product, address=Noun, payment="신용카드"):
        print(f"[{name}] 주문: {product}")
        
        if address:
            print(f" - 배송지: {address}")
        print(f" - 결제수단: {payment}")
        
    process_order("Kim", "사과")
    process_order("Lee", "포도", address="서울시 강남구")
    process_order("Park", "배", payment="카카오페이")
