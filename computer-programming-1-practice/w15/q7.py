def deposit(balance, amount):
    if amount <= 0:
        raise ValueError("입금액은 0보다 커야 합니다.")
    return balance + amount

def withdraw(balance, amount):
    if amount <= 0:
        raise ValueError("출금액은 0보다 커야 합니다.")
    if amount > balance:
        raise ValueError(f"잔액 부족 (잔액: {balance}원, 출금 요청: {amount}원")
    
balance = 10000
print(f"초기 잔액: {balance}원")

try:
    action = input("1. 입금 / 2. 출금: ").strip()
    if action not in ("1", "2"):
        raise ValueError("1 또는 2를 입력하세요.")
    amount = int(input("금액 입력: "))
    
    if action == "1":
        balance = deposit(balance, amount)
    else:
        balance = withdraw(balance, amount)
        
except ValueError as e:
    print(f"[오류] {e}")
else:
    print(f"거래 성공! 남은 잔액: {balance}원")
finally:
    print(f"현재 잔액: {balance}원")