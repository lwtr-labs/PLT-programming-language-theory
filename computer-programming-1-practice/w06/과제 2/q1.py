def usd_to_krw(dollar):
    exchange_rate = 1510
    return dollar * exchange_rate

def krw_to_usd(won):
    exchange_rate = 1510
    return won / exchange_rate

user_input = input("금액을 단위와 함께 입력해주세요(예: 100달러, 100원): ")

if "달러" in user_input:
    usd = float(user_input.replace("달러", ""))
    result = usd_to_krw(usd)
    print(f"{usd}달러는 {result:,.0f}원입니다.")
    
elif "원" in user_input:
    krw = float(user_input.replace("원", ""))
    result = krw_to_usd(krw)
    print(f"{krw}원은 {result:,.2f}달러입니다.")
    
else:
    print("단위(달러 또는 원)를 정확히 입력해주세요.")