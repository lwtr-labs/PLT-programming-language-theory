name1, price1, total1 = "NVIDIA", 266384.28, 4.271
name2, price2, total2 = "Apple", 387458.39, 3.757
name3, price3, total3 = "Alphabet(Google)", 446979.93, 3.567
name4, price4, total4 = "Berkshire Hathaway", 1085488999, 1.032

print("종목 | 단가(원) | 시총 (조$)")
print("-"*40)
print(name1, "|", price1, "|", total1)
print(name2, "|", price2, "|", total2)
print(name3, "|", price3, "|", total3)
print(name4, "|", price4, "|", total4)

print("-"*55)
print(f"{'종목':^16s} | {'단가(원)':^15s} | {'시총(조$)':^7s}")
print("-"*55)
print(f"{name1:<18s} | {price1:>18,.2f} | {total1:>10.3f}")
print(f"{name2:<18s} | {price2:>18,.2f} | {total2:>10.3f}")
print(f"{name3:<18s} | {price3:>18,.2f} | {total3:>10.3f}")
print(f"{name4:<18s} | {price4:>18,.2f} | {total4:>10.3f}")
