def process_order(name, product, address=None, payment="신용카드", **options):
    print(f"[{name}] 주문: {product}")
    
    if address:
        print(f" - 배송지: {address}")
    print(f" - 결제수단: {payment}")
    
    for key, value in options.items():
        print(f" - {key}: {value}")
    
process_order("Kim", "사과")
process_order("Lee", "포도", address="서울시 강남구", 배송옵션="새벽배송", 요청사항="문 앞에 두세요")
process_order("Park", "배", payment="무통장입금", 배송옵션="", 요청사항="취급주의")