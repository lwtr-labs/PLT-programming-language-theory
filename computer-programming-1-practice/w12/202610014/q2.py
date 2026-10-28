import math

def cal_circle(radius):
    circumference = 2 * math.pi * radius
    area = math.pi * (radius ** 2)
    volume = (4/3) * math.pi * (radius ** 3)
    
    return circumference, area, volume
r = float(input("원의 반지름을 입력하세요: "))
result_tuple = cal_circle(r)
print("전체 계산 결과(튜플):", result_tuple)

print(f"원의 둘레: {result_tuple[0]:.2f}")
print(f"원의 넓이: {result_tuple[1]:.2f}")
print(f"원의 부피: {result_tuple[2]:.2f}")