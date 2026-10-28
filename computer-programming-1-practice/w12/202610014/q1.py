orgin_list = [1,2,3,4,5]
tuple_a = tuple(orgin_list)
tuple_gen = tuple(x * 10 for x in tuple_a)
tuple_b = (1, 2, "hello!")
tuple_all = tuple_b, tuple_a

for x in tuple_a:
    print(x, end=" ")
print()

print(f"for로 생성: {tuple_gen}")
print(f"tuple_a 길이: {len(tuple_a)}")
print(f"tuple_all 길이: {len(tuple_all)}")
combined = tuple_a + tuple_b
print(f"튜플 더하기: {combined}")
repeated = tuple_a * 2
print(f"튜플 곱하기: {repeated}")
print(f"3이 있나?", (3 in tuple_a))
print(f"10이 있나?", 10 in tuple_a)