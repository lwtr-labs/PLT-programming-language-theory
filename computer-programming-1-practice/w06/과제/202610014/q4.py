x= int(input("가로 크기: "))
y= int(input("세로 크기: "))

for j in range(y):
    for i in range(x):
        if i>= ((x-1)-j):
            print("*", end="")
        else:
            print("-", end="")
    print("")