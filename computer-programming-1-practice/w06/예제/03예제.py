# 환율 계산

def usd_to_krw(dollar):
    exchange_rate = 1475
    won = dollar * exchange_rate
    return won

usd_amount = float(input("환전할 달러($): "))

krw_result = usd_to_krw(usd_amount)
print(f"${usd_amount}는 {krw_result:,.0f}원입니다.")
