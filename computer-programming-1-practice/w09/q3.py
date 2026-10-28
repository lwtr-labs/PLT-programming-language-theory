heroes = ['아이언맨','헐크','토르','Ironman','Hulk','Thor']

new_heroes = sorted(heroes)
print("새로운 리스트(sorted):", new_heroes)
print("원본 리스트:", heroes)

heroes.sort()
print("원본 정렬 후:", heroes)

heroes.sort(reverse=True)
print("내림차순 정렬:", heroes)

test_list = [2, 4, 1, 3]
test_list.reverse()
print("단순 뒤집기:", test_list)