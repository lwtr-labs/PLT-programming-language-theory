import random

x = random.randint(1,9)
y = random.randint(1,9)

answer = int(input(f"{x} * {y} = "))

flag = (answer == (x*y))

print(flag)
