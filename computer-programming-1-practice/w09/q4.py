fruits = ['사과', '바나나', '포도']
prices = [1000, 500, 2000]
counts = [5, 10, 3]

print("--- 오늘 판매되는 과일 목록 ---")

for i, j, k in zip(fruits, prices, counts):
    print(f"품명: {i} | 가격: {j}원 | 재고: {k}개")
    