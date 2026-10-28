deposit = 100
total_interest = 0
months = 0
limit_months = 24
annual_rate = 0.05
monthly_rate = annual_rate / 12

while months < limit_months:
    months += 1
    
    total_interest += deposit * monthly_rate * (limit_months - months + 1)
    
total_deposit = deposit * limit_months
balance = total_deposit + total_interest

print(f"저측 기간: {months}개월")
print(f"납입 원금: {total_deposit}만원")
print(f"세전 이자: {total_interest:.2f}만원")
print(f"최종 만기 금액: {balance:.2f}만원")