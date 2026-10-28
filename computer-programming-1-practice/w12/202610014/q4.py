numbers = {1, 2, 3, 4, 5}
print(len(numbers))

fruits = {"Apple", "Banana", "Pineapple"}
mySet = {1.0, 2.0, "Hello World", (1, 2, 3)}

print(fruits)
print(mySet)

cities = {"Paris", "Seoul", "London", "Berlin", "Paris", "Seoul"}
print(cities)

empt = set()
print(empt)

numbers = {2, 1, 3, 5, 4}

if 2 in numbers:
    print("집합 안에 2가 있습니다.")
if 8 not in numbers:
    print("집합 안에 8이 없습니다.")
    
for x in numbers:
    print(x, end=" ")