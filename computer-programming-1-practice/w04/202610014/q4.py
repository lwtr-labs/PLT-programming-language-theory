itemPrice = int(input("물건값을 입력하시오: "))
note10000 = int(input("10000원 지폐개수: "))
note5000 = int(input("5000원 지폐개수: "))
note1000 = int(input("1000원 지폐개수: "))
coin500 = int(input("500원 동전개수: "))
coin100 = int(input("100원 동전개수: "))
coin50 = int(input("50원 동전개수: "))

change = note10000*10000 + note5000*5000 + note1000*1000 + coin500*500 + coin100*100 + coin50*50 - itemPrice

nBill5000 = change//5000
change = change%5000

nBill1000 = change//1000
change = change%1000

nCoin500 = change//500
change = change%500

nCoin100 = change//100
change = change%100

nCoin50 = change//50
change = change%50

nCoin10 = change//10
change = change%10

nCoin1 = change

print("-"*30)
print(f"물건의 가격: {itemPrice}")
print("-"*30)
print("받은 금액")
print("-"*30)

print(f"10000원: {note10000}")
print(f"5000원: {note5000}")
print(f"1000원: {note1000}")
print(f"500원: {coin500}")
print(f"100원: {coin100}")
print(f"50원: {coin50}")

print("-"*30)
print("거슬러 줄 금액")
print("-"*30)

print(f"""5000원 = {nBill5000}
1000원 = {nBill1000}
500원 = {nCoin500}
100원 = {nCoin100}
50원 = {nCoin50}
10원 = {nCoin10}
""")



