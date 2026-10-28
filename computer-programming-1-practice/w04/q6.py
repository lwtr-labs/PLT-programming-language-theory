import math

epsilon = 1e-9
a = 0.1+0.1+0.1
b = 0.3

if abs(a-b) < epsilon:
    print("a와 b가 동일합니다.")

if math.isclose(a, b):
    print("a와 b가 거의 동일합니다.")